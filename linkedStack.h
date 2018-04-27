//
// Created by zhao.feng on 2018/4/25.
// 后进先出

#ifndef C1_LINKEDSTACK_H
#define C1_LINKEDSTACK_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct LkNode{
    int data;
    struct LkNode *LkNEXT;
} *LkNODE;


typedef struct LkStack{
    LkNODE LkStackTop;/*栈顶指针*/
    LkNODE LkStackBottom;/*栈底指针*/
}*LkSTACK;

void create(LkSTACK stack);/*创建空栈*/
void push_stack(LkSTACK stack,int value);/*压栈*/
void pop_stack(LkSTACK stack,int *value);/*出栈*/
void traverse_stack(LkSTACK stack);/*遍历栈*/
int stack_length(LkSTACK stack);/*栈长度*/

#endif //C1_LINKEDSTACK_H
