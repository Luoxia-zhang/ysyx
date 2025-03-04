/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <string.h>
/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include <memory/paddr.h>
enum {


  TK_NOTYPE = 256, TK_EQ, TK_NUMBER,TK_NEGATIVE,TK_NOEQ,TK_AND,TK_POINTER_DEREF,TK_REG,TK_HEX,TK_LEQ
	
  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
	{"\\-", '-'},
	{"\\*", '*'},
	{"\\/", '/'},

	{"\\(", '('},
	{"\\)", ')'},
  
	{"==", TK_EQ},
  {"\\&\\&", TK_AND},
  {"!=", TK_NOEQ},
	{"<=", TK_LEQ},
	{"\\$(\\$0|ra|[sgt]p|t[0-6]|a[0-7]|s([0-9]|1[0-1]))", TK_REG},
	{"0[xX][0-9a-fA-F]+", TK_HEX},
	{"[0-9]+", TK_NUMBER},

};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[8000000] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;
  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

				Token token;

        switch (rules[i].token_type) {
					case TK_NOTYPE:
						break;
          default:
						strncpy(token.str,substr_start,substr_len);
						token.str[substr_len] = '\0';
						token.type=rules[i].token_type;
						tokens[nr_token++] = token;
						break;
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}


bool check_parentheses(word_t p, word_t q) {
  if (tokens[p].type != '(' || tokens[q].type != ')') return false;
  int balance = 0;
  for (word_t i = p; i <= q; i++) {
    if (tokens[i].type == '(') balance++;
    else if (tokens[i].type == ')') balance--;
    if (balance == 0 && i != q) return false;
  }
  return balance == 0;
}

word_t find_major(word_t p, word_t q) {
  word_t ret = -1;
  int par = 0;
  int op_priority = -1;

  for (word_t i = p; i <=q; i++) {
    if (tokens[i].type == '(') par++;
    else if (tokens[i].type == ')') par--;
    else if (par != 0) continue;

    // 处理负号
    if (tokens[i].type == '-') {
      if (i == p || tokens[i-1].type == '(' || tokens[i-1].type == '+' || tokens[i-1].type == '-' || tokens[i-1].type == '*' || tokens[i-1].type == '/' || tokens[i-1].type == TK_EQ || tokens[i-1].type == TK_NOEQ || tokens[i-1].type == TK_AND) {
        tokens[i].type = TK_NEGATIVE;
				return i;
      }
    }

    // 处理指针解引用
		if(tokens[i].type == '*') {
			if (i == p || (i > 0 && (tokens[i-1].type != ')' && tokens[i-1].type != TK_NUMBER && tokens[i-1].type != TK_HEX && tokens[i-1].type != TK_REG))) {				
				tokens[i].type = TK_POINTER_DEREF;
				return i;
			}
    }

    int curr_priority = -1;
    switch (tokens[i].type) {
      case TK_POINTER_DEREF: case TK_NEGATIVE: curr_priority = 0; break;
      case '*': case '/': curr_priority = 1; break;
      case '+': case '-': curr_priority = 2; break;
      case TK_EQ: case TK_NOEQ: curr_priority = 3; break;
      case TK_AND: curr_priority = 4; break;
    }

    if (curr_priority == op_priority) {
      ret = i;
    }else if (curr_priority > op_priority){
			op_priority = curr_priority;
			ret=i;
		}
  }

  return ret;
}

int32_t eval(word_t p, word_t q) {
  if (p > q) {
    printf("Invalid expression\n");
    assert(0);
  } else if (p == q) {
    if (tokens[p].type == TK_REG) {
      bool success;
      word_t val = isa_reg_str2val(tokens[p].str, &success);
      return success ? val : 0;
    } else if (tokens[p].type == TK_NUMBER) {
      word_t num;
			sscanf(tokens[p].str,"%d",&num);
			return num;
    } else if (tokens[p].type == TK_HEX) {
      return strtol(tokens[p].str, NULL, 16);
    }
    assert(0);
  } else if (check_parentheses(p, q)) {
    return eval(p + 1, q - 1);
  } else {
    word_t op = find_major(p, q);
    if (tokens[op].type == TK_NEGATIVE) {
      return -eval(op + 1, q);
    } else if (tokens[op].type == TK_POINTER_DEREF) {
      return paddr_read(eval(op + 1, q), 4);
    }

    int32_t val1 = eval(p, op - 1);
    int32_t val2 = eval(op + 1, q);
		if(val2==0 && tokens[op].type =='/'){
			printf("value2 is wrong");
			return 0;
		}	
		switch (tokens[op].type) {
			case '+': return val1 + val2;
			case '-': return val1 - val2;
			case '*': return val1 * val2;
			case '/': return val1 / val2;
			case TK_EQ: return val1 == val2;
			case TK_NOEQ: return val1 != val2;
			case TK_AND: return val1 && val2;
			default: assert(0);
		}
  }
  return 0;
}

int32_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  *success = true;
	return eval(0, nr_token - 1);
}
