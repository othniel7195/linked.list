//
// Created by zhao.feng on 2018/4/25.
//

#include "linkedQueue.h"
void create_queue(LkQUEUE queue){

    LkqNODE node = (LkqNODE)malloc(sizeof(LkqNODE));
    if (NULL == node){

        exit(-1);
    }
    node->LkNEXT = NULL;
    queue->LkQueueBottom = queue->LkQueueTop = node;

}
void in_queue(LkQUEUE queue,int value){

    //入队操作 是尾插法
    LkqNODE node = (LkqNODE)malloc(sizeof(LkqNODE));
    node->data = value;
    node->LkNEXT = NULL;
    queue->LkQueueBottom->LkNEXT = node;
    queue->LkQueueBottom = node;

}

void out_queue(LkQUEUE queue,int *value){

    /*先进的先出   从最早的top开始 ，bottom指向最后入队的*/
    LkqNODE node = queue->LkQueueTop->LkNEXT;
    *value = node->data;

    queue->LkQueueTop = queue->LkQueueTop->LkNEXT;
    free(node);
}
void traverse_queue(LkQUEUE queue){

    /*因为是尾插法  后插入的在尾部  要从top开始 next-》next去遍历*/
    LkqNODE  node = queue->LkQueueTop->LkNEXT;
    while (NULL != node){

        printf("queue:%d\n",node->data);
        node = node->LkNEXT;
    }
}

