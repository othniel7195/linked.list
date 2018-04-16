//
// Created by zf on 2018/4/10.
//

#ifndef C1_LINKEDLIST_H
#define C1_LINKEDLIST_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node{
    int data;//值域
    struct Node *PNEXT;//指针域
}NODE, *PNODE;


PNODE createHead_linkedList(int len);//头插法生成链表
PNODE createTail_linkedList(int len);//尾插法生链表
void  traverse_linkedList(PNODE pHead);
bool isempty(PNODE pHead);
PNODE insert_linkedList(PNODE pHead,int idx,int val);
PNODE remove_linkedList(PNODE pHead,int idx,int val);

//测试用
PNODE createTail2_linkedList();
PNODE createHead2_linkedList();

#endif //C1_LINKEDLIST_H
