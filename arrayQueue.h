//
// Created by zhao.feng on 2018/4/28.
// 数组模拟循环队列

#ifndef C1_ARRAYQUEUE_H
#define C1_ARRAYQUEUE_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE  8

typedef struct arrQueue{
    int rear;//后面的索引
    int front;//前面的
    int arr[MAX_SIZE];
}*ArrQUE;

void create_arr_queue(ArrQUE queue);/*创建循环队列*/
bool full_arr_queue(ArrQUE queue);/*循环队列是否满*/
bool empty_arr_queue(ArrQUE queue);/*循环队列是否为空*/
void in_arr_queue(ArrQUE queue, int val);/*循环队列入队*/
void out_arr_queue(ArrQUE queue, int *val);/*循环队列出队*/
void traverse_arr_queue(ArrQUE queue);/*遍历循环队列*/
#endif //C1_ARRAYQUEUE_H
