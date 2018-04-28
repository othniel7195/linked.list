//
// Created by zhao.feng on 2018/4/28.
//

#ifndef C1_ARRAYQUEUE_H
#define C1_ARRAYQUEUE_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE  5

typedef struct arrQueue{
    int top;
    int arr[MAX_SIZE];
}*ArrQUE;

void create_arr_queue(ArrQUE queue);/*创建数组栈*/
bool full_arr_queue(ArrQUE queue);/*数组栈是否满*/
void push_arr_queue(ArrQUE queue, int val);
void pop_arr_queue(ArrQUE queue, int *val);
void traverse_arr_queue(ArrQUE queue);/*遍历栈*/
#endif //C1_ARRAYQUEUE_H
