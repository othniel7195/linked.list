//
// Created by zhao.feng on 2018/4/25.
// 先进先出

#ifndef C1_LINKEDQUEUE_H
#define C1_LINKEDQUEUE_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct LkNode{
    int data;
    struct LkNode *LkNEXT;
}*LkNODE;

typedef struct LkQueue{

    LkNODE LkQueueTop;
    LkNODE LkQueueBottom;

}*LkQUEUE;

void create(LkQUEUE queue);/*创建空栈*/
void push_stack(LkQUEUE queue,int value);/*压栈*/
void pop_stack(LkQUEUE queue,int *value);/*出栈*/
void traverse_stack(LkQUEUE queue);/*遍历栈*/
int stack_length(LkQUEUE queue);/*栈长度*/

#endif //C1_LINKEDQUEUE_H
