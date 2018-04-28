//
// Created by zf on 2018/4/28.
//

#include "arrayStack.h"

void create_arr_stack(ArrSTACK stack){

    stack->arr[MAX_SIZE] = (int)malloc(sizeof(int) * MAX_SIZE);
    stack->top = -1;

}
bool full_arr_stack(ArrSTACK stack){

    if (stack->top == MAX_SIZE - 1){
        return true;
    }

    return false;

}

bool empty_arr_stack(ArrSTACK stack){

    if (stack->top == -1){
        return true;
    }
    return false;
}

void push_arr_stack(ArrSTACK stack, int val)
{

    if (!full_arr_stack(stack)){

        int i = ++stack->top;
        printf("入栈的idx:%d\n",i);
        stack->arr[i] = val;

    }
}

void pop_arr_stack(ArrSTACK stack, int *val){

    if (!empty_arr_stack(stack)){
        *val = stack->arr[stack->top--];
    }


}
void traverse_arr_stack(ArrSTACK stack){

    for (int i = 0; i <= stack->top; ++i) {

        int v = stack->arr[i];
        printf("%d:\n",v);
    }

}