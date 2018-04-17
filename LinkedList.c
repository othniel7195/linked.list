//
// Created by zf on 2018/4/10.
//

#include "LinkedList.h"


PNODE createHead_linkedList(int len){

    int var; //用户输入值
    PNODE pHead = (PNODE)malloc(sizeof(NODE));
    pHead->PNEXT = NULL;
    if (NULL == pHead){
        printf("head 内存分配失败");
        exit(-1);
    }

    for (int i = 0; i < len; ++i) {

        printf("输入第%d个链表值",i);
        scanf("%d",&var);
        //把第一pNew 变成了PNEXT 为NULL的尾节点，pHead.PNEXT永远是指向链表第一个有效节点
        // ,pHead永远是链表第一个无效节点
        PNODE pNew = (PNODE)malloc(sizeof(NODE));
        pNew->data = var;
        pNew->PNEXT = pHead->PNEXT;
        pHead->PNEXT = pNew;

    }

    return pHead;

}


PNODE createHead2_linkedList(){


    PNODE pHead = (PNODE)malloc(sizeof(NODE));
    pHead->PNEXT = NULL;

    for (int i = 0; i < 4 ; ++i) {

        PNODE pNew = (PNODE)malloc(sizeof(NODE));
        pNew->data = (i+1)*2;
        pNew->PNEXT = pHead->PNEXT;
        pHead->PNEXT = pNew;

    }

//    PNODE p1 = (PNODE)malloc(sizeof(NODE));
//    p1->data = 2;
//    p1->PNEXT = NULL;
//
//    PNODE p2 = (PNODE)malloc(sizeof(NODE));
//    p2->data = 4;
//    p2->PNEXT = p1;
//
//    PNODE p3 = (PNODE)malloc(sizeof(NODE));
//    p3->data = 6;
//    p3->PNEXT = p2;
//
//    PNODE p4 = (PNODE)malloc(sizeof(NODE));
//    p4->data = 8;
//    p4->PNEXT = p3;
//
//    PNODE pHead = (PNODE)malloc(sizeof(NODE));
//    pHead->PNEXT = p4;



    return pHead;

}

PNODE createTail_linkedList(int len){

    int var;
    PNODE pHead = (PNODE)malloc(sizeof(NODE));
    PNODE pTail = (PNODE)malloc(sizeof(NODE));//尾节点
    if(NULL == pHead){
        printf("内存分配失败");
        exit(-1);
    }
    pTail = pHead;

    for (int i = 0; i < len; ++i) {

        printf("输入第%d个链表值",i);
        scanf("%d",&var);
        PNODE pNew = (PNODE)malloc(sizeof(NODE));
        pNew->data = var;
        pTail->PNEXT = pNew;
        pTail = pNew;

    }
    pTail->PNEXT = NULL;

    return pHead;

}

PNODE createTail2_linkedList(){

    PNODE pHead = (PNODE)malloc(sizeof(NODE));

    PNODE pTail = (PNODE)malloc(sizeof(NODE));
    pTail = pHead;



    for (int i = 0; i < 4 ; ++i) {

        PNODE pNew = (PNODE)malloc(sizeof(NODE));
        pNew->data = (i+1)*2;
        pTail->PNEXT = pNew;

        pTail = pNew;

    }

    pTail->PNEXT = NULL;

    return pHead;

    PNODE p1 = (PNODE)malloc(sizeof(NODE));
    p1->data = 2;
    pHead->PNEXT = p1;

    PNODE p2 = (PNODE)malloc(sizeof(NODE));
    p2->data = 4;
    p1->PNEXT = p2;

    PNODE p3 = (PNODE)malloc(sizeof(NODE));
    p3->data = 6;
    p2->PNEXT = p3;

    PNODE p4 = (PNODE)malloc(sizeof(NODE));
    p4->data = 8;
    p3->PNEXT = p4;

    p4->PNEXT = NULL;

    return pHead;
}


void  traverse_linkedList(PNODE pHead){

    PNODE p = pHead->PNEXT;//pHead.PNEXT永远是指向链表第一个有效节点,pHead永远是链表第一个无效节点
    // 所有遍历要从pHead.PNEXT开始

    while (NULL != p){
        printf("%d ,",p->data);
        printf("遍历节点地址:%x\n",p);
        p = p->PNEXT;
    }

    printf("\n===============\n");

}

bool isempty(PNODE pHead){
    if (NULL == pHead || NULL == pHead->PNEXT){
        return false;
    }

    return true;
}
int length(PNODE pHead)
{
    PNODE p = pHead->PNEXT;
    int i = 0;
    while (NULL != p){
        ++i;
        p = p->PNEXT;
    }

    return i;
}

bool insert_linkedList(PNODE pHead,int idx,int val){

    int i = 0;

    PNODE  p = pHead;
    //从头结点开始判断每个节点是否为空，在idx上插入节点，那么要获取idx前一个节点
    while (p != NULL && i<idx-1){
        p = p->PNEXT;


        ++i;

    }

    printf("i:%d\n",i);
    //如果idx前一个节点为NULL 那么异常
    if (p == NULL) return false;

    PNODE pNew = (PNODE)malloc(sizeof(NODE));
    pNew->data = val;
    pNew->PNEXT = p->PNEXT;
    p->PNEXT = pNew;

    return true;

}
bool remove_linkedList(PNODE pHead,int idx,int *var){

    int i = 0;
    PNODE p = pHead;
    //从头结点开始判断每个节点是否为空，用删除idx的节点必须知道idx前一个节点，
    //让idx前一个节点直接指向idx后一个节点

    while (NULL != p && i < idx -1){
        p = p->PNEXT;
        ++i;
        printf("pppp:%x\n",p);
    }

    //获取删除的idx前的一个节点p


    if (p->PNEXT == NULL) {
        printf("remove的节点是NULL\n");

        return false;
    }

    printf("remove1\n");
    PNODE tmp = p->PNEXT;
    *var = tmp->data;
    p->PNEXT = p->PNEXT->PNEXT;
    free(tmp);
    return true;
}