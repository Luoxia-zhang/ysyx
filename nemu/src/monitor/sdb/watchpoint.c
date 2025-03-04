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
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "sdb.h"
#include <isa.h>
#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  char *expression;  // 监视点的表达式
  int value;        // 监视点的一个值
 
  /* TODO: Add more members if necessary */
 
} WP;


static WP wp_pool[NR_WP] = {};
//head用于组织使用中的监视点结构, free_用于组织空闲的监视点结构
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

//new_wp()从free_链表中返回一个空闲的监视点结构
WP* new_wp();

//free_wp()将wp归还到free_链表中
void free_wp(WP *wp);

WP* new_wp()
{
  if(free_==NULL)
  {
    printf("free_没有空闲监视点\n");
    assert(0);
  }
  WP *wp=free_;
  free_=free_->next;
  wp->next=head;
	head=wp;
  return wp;
}


void free_wp(WP *wp)
{
  if(wp==head)
  {
    head=head->next;
  }
  else
  {
    WP *pos=head;
    while(pos!=NULL && pos->next!=wp)
    {
      pos=pos->next;
    }
    if (pos==NULL)
    {
      printf("输入的监视点不在head链表中\n");
      assert(0);
    }
    pos->next=wp->next;
  }
	if(wp->expression != NULL){
		free(wp->expression);
		wp->expression = NULL;
	}
  wp->next=free_;
  free_=wp;
}


void info_watchpoint()
{
  WP *pos=head;
  if(!pos)
  {
    printf("NO watchpoints\n");
    return;
  }
  printf("%-8s%-8s\n", "No", "Expression");
  while (pos) {
    printf("%-8d%-8s\n", pos->NO, pos->expression);
    pos = pos->next;
  }
}



void wp_set(char *args, int32_t res)
{
  WP* wp = new_wp();
	if(wp == NULL){
		printf("not new wp\n");
		return ;
	}
	wp->expression = strdup(args);
	if(wp->expression == NULL){
    printf("Failed to allocate memory for expression.\n");
    free_wp(wp);
    return;
	}
  wp->value=res;
  printf("Watchpoint %d: %s\n", wp->NO, wp->expression);
}


void wp_remove(int no)
{
  if(no<0 || no>=NR_WP)
  {
    printf("N is not in right\n");
    assert(0);
  }
  WP* wp = &wp_pool[no];
  printf("Delete watchpoint %d: %s\n", wp->NO, wp->expression);
  free_wp(wp);
}

void wp_difftest() {
  for (WP *wp = head; wp != NULL; wp = wp->next) {
    bool success = false;
    uint32_t new_value = expr(wp->expression, &success);  // 计算当前表达式的值

    // 如果表达式求值成功且值发生变化，则触发监视点
    if (success && new_value != wp->value) {
      wp->value = new_value;  // 更新监视点的值
      nemu_state.state = NEMU_STOP;  // 暂停模拟
      printf("Watchpoint %d triggered: %s, new value = 0x%x\n", wp->NO, wp->expression, wp->value);
      return;
    }
  }
}
int isHex(const char *str) {
    if (str[0] == '*' || strchr(str, '*') != NULL) {
        return 0;  
    }
    if (str[0] == '0' && (str[1] == 'x' || str[1] == 'X')) {
        str += 2;  
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isxdigit((unsigned char)str[i])) {
            return 0;  
        }
    }
    return 1;  
}
void break_point(){
	for (WP *wp = head; wp != NULL; wp = wp->next) {
		if(isHex(wp->expression)){
			if (cpu.pc == wp->value){
				nemu_state.state = NEMU_STOP;
				printf("Watchpoint %d triggered: %s, new value = 0x%x\n", wp->NO, wp->expression, wp->value);
				return ;
			}
		}	
	}
}
