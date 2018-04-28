//
// Created by zf on 2018/4/28.
// 数组栈问题  数组大小固定 满了就无法压栈 ，出栈也不会释放空间
// 可以用realloc 重新分配空间但是麻烦
// realloc函数用于修改一个原先已经分配的内存块的大小，
// 可以使一块内存的扩大或缩小。当起始空间的地址为空，即*ptr = NULL,则同malloc

#ifndef C1_ARRAYSTACK_H
#define C1_ARRAYSTACK_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE  5

typedef struct arrStack{
    int top;
    int arr[MAX_SIZE];
}*ArrSTACK;

void create_arr_stack(ArrSTACK stack);/*创建数组栈*/
bool full_arr_stack(ArrSTACK stack);/*数组栈是否满*/
void push_arr_stack(ArrSTACK stack, int val);
void pop_arr_stack(ArrSTACK stack, int *val);
void traverse_arr_stack(ArrSTACK stack);/*遍历栈*/

#endif //C1_ARRAYSTACK_H
