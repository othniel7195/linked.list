//
// Created by zhao.feng on 2018/4/25.
//

#include "linkedStack.h"

void create(LkSTACK stack){

    stack->LkStackBottom = (LkNODE)malloc(sizeof(LkNODE));
    if (NULL == stack->LkStackBottom){
        printf("stack create fail");
        exit(-1);
    }

    //空栈  栈顶==栈底
    stack->LkStackTop = stack->LkStackBottom;
    stack->LkStackTop->LkNEXT = NULL;
}
void push_stack(LkSTACK stack,int value){
    /*压栈 类似链表的头插法  新的节点插入链表头*/
    LkNODE node = (LkNODE)malloc(sizeof(LkNODE));
    node->data = value;
    node->LkNEXT = stack->LkStackTop;/*新节点的next 指向top*/
    stack->LkStackTop = node;/*top 指向栈顶*/
}
void pop_stack(LkSTACK stack,int *value){

    LkNODE node = stack->LkStackTop;
    *value = node->data;
    stack->LkStackTop = stack->LkStackTop->LkNEXT;
    free(node);
}

void traverse_stack(LkSTACK stack){

    LkNODE node = stack->LkStackTop;

    while (NULL != node){
        printf("%d:%x \n",node->data,node);
        node = node->LkNEXT;
    }
}

int stack_length(LkSTACK stack){

    int i = 0;
    LkNODE node = stack->LkStackTop;

    while (NULL != node){
        ++i;
    }

    return i;
}