//
// Created by zhao.feng on 2018/4/25.
//

#include "linkedStack.h"

void create(LkSTACK stack){

    LkNODE  node = (LkNODE)malloc(sizeof(LkNODE));
    node->LkNEXT = NULL;

    if (NULL == node){
        printf("stack create fail");
        exit(-1);
    }

    //空栈  栈顶==栈底
    stack->LkStackTop = node;
    stack->LkStackBottom = node;
}
void push_stack(LkSTACK stack,int value){
    /*压栈 类似链表的头插法  新的节点插入链表头*/
    LkNODE node = (LkNODE)malloc(sizeof(LkNODE));
    node->data = value;
    node->LkNEXT = stack->LkStackTop;/*新节点的next 指向top
 * 如果 node->LkNEXT = stack->LkStackTop->LkNEXT 那么node->LkNEXT 永远等于NULL*/
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

    /*如果node != NULL 那么最后有一个 node 也就是push的第一个节点的next 是 最开始的top 那么node.data = 0  node.LkNEXT == NULL*/
    while (node->LkNEXT!= NULL){
        printf("%d\n",node->data);
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