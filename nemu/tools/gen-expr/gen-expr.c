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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

static void gen_rand_expr(int depth);
static void gen(char c);
static void gen_num(int non_zero);
static char gen_rand_op(void);
static int choose(int n);

static char buf[655369] = {};
static int index_buf = 0;
static char code_buf[655369 + 128] = {};
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  int result = %s; "
"  printf(\"%%d\", result); "
"  return 0; "
"}";

static void gen_rand_expr(int depth) {
    if (index_buf >= sizeof(buf) - 20) { // 提前预留足够空间
        gen_num(0);
        return;
    }
    if (depth > 10) {
        gen_num(0);
        return;
    }

    switch (choose(3)) { // 调整为三种情况：数字、括号、二元运算符
        case 0: 
            gen_num(0); 
            break;
        case 1: {
            gen('(');
            int prev = index_buf;
            gen_rand_expr(depth + 1);
            if (index_buf == prev) { // 括号内为空时补数字
                gen_num(0);
            }
            gen(')');
            break;
        }
        default: { // case 2生成二元运算
            gen_rand_expr(depth + 1);
            if (index_buf >= sizeof(buf) - 5) {
                break;
            }
            char op = gen_rand_op();
            gen(op); // 生成运算符
            if (op == '/') {
                gen_num(1);  // 除法需要非零数字
            } else {
                gen_rand_expr(depth + 1);
            }
            break;
        }
    }
}

int choose(int n) {
    return rand() % n;
}

static void gen(char c) {
    if (index_buf < sizeof(buf) - 1) {
        buf[index_buf++] = c;
    }
}

static void gen_num(int non_zero) {
    if (index_buf >= sizeof(buf) - 5) {
        return;
    }
    int num;
    do {
        num = rand() % 100;
        if (rand() % 2 == 0) num = -num;
    } while (non_zero && num == 0); // 确保非零

    // 负数用括号括起来
    if (num < 0) {
        gen('(');
    }

    char num_str[12];
    sprintf(num_str, "%d", num);
    for (int i = 0; num_str[i] != '\0'; i++) {
        gen(num_str[i]);
    }

    if (num < 0) {
        gen(')');
    }
}

static char gen_rand_op(void) {
    char op[] = {'+', '-', '*', '/'};
    return op[rand() % 4];
}

int main(int argc, char *argv[]) {
    srand(time(0));
    int loop = argc > 1 ? atoi(argv[1]) : 1;
    while (loop--) {
        index_buf = 0;
        memset(buf, 0, sizeof(buf));
        gen_rand_expr(0);

        if (index_buf == 0) gen_num(0);

        sprintf(code_buf, code_format, buf);
        FILE *fp = fopen("/tmp/.code.c", "w");
        if (!fp) continue;
        fputs(code_buf, fp);
        fclose(fp);

        if (system("gcc /tmp/.code.c -o /tmp/.expr 2>/dev/null") != 0) {
            continue;
        }

        fp = popen("/tmp/.expr", "r");
        if (!fp) continue;
        int result;
        if (fscanf(fp, "%d", &result) == 1) {
            printf("%d %s\n", result, buf);
        }
        pclose(fp);
    }
    return 0;
}
