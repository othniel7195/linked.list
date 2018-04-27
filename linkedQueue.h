//
// Created by zhao.feng on 2018/4/25.
// 先进先出

#ifndef C1_LINKEDQUEUE_H
#define C1_LINKEDQUEUE_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct LkqNode{
    int data;
    struct LkNode *LkNEXT;
}*LkqNODE;

typedef struct LkQueue{

    LkqNODE LkQueueTop;
    LkqNODE LkQueueBottom;

}*LkQUEUE;

void create_queue(LkQUEUE queue);/*创建空队列*/
void in_queue(LkQUEUE queue,int value);/*入队*/
void out_queue(LkQUEUE queue,int *value);/*出队*/
void traverse_queue(LkQUEUE queue);/*遍历队列*/

#endif //C1_LINKEDQUEUE_H
