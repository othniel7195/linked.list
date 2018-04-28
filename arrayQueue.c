//
// Created by zhao.feng on 2018/4/28.
//

#include "arrayQueue.h"

void create_arr_queue(ArrQUE queue){

    queue->arr[MAX_SIZE] = (int)malloc(sizeof(int) * MAX_SIZE);
    queue->top = -1;
}
bool full_arr_queue(ArrQUE queue){

    if (queue->top == MAX_SIZE - 1){
        return true;
    }

    return false;
}
bool empty_arr_queue(ArrQUE queue){

    if (queue->top == -1){
        return true;
    }
    return false;
}
void push_arr_queue(ArrQUE queue, int val){
    if (!full_arr_queue(queue)){

        int i = ++queue->top;
        printf("入队的idx:%d\n",i);
        queue->arr[i] = val;

    }
}

void pop_arr_queue(ArrQUE queue, int *val){

    if (!empty_arr_queue(queue)){
        *val = queue->arr[queue->top--];
    }

}
void traverse_arr_queue(ArrQUE queue){


    for (int i = 0; i <= queue->top; ++i) {

        int v = queue->arr[i];
        printf("%d:\n",v);
    }
}