//
// Created by zhao.feng on 2018/4/28.
//

#include "arrayQueue.h"

void create_arr_queue(ArrQUE queue){

    queue->arr[MAX_SIZE] = (int)malloc(sizeof(int) * MAX_SIZE);
    queue->front = 0;
    queue->rear = 0;

}
bool full_arr_queue(ArrQUE queue){

    if (((queue->rear+1) % MAX_SIZE) == queue->front){
        printf("循环队列满了\n");
        return true;
    }
    return false;
}
bool empty_arr_queue(ArrQUE queue){
    if (queue->rear == queue->front){
        printf("循环队列空了\n");
        return true;
    }
    return false;


}
void in_arr_queue(ArrQUE queue, int val){

    if (!full_arr_queue(queue)){
        int idx = queue->rear % MAX_SIZE;
        queue->arr[idx] = val;
        ++queue->rear;
    }
}
void out_arr_queue(ArrQUE queue, int *val){

    if (!empty_arr_queue(queue)){
        int idx = queue->front;
        printf("out -- 1:%d\n",idx);
        *val = queue->arr[idx];
        printf("out -- 2:%d\n",*val);
        ++queue->front;
    }
}
void traverse_arr_queue(ArrQUE queue){

    if (!empty_arr_queue(queue)){

        for (int i = queue->front; i < queue->rear ; ++i) {
            int val = queue->arr[i];
            printf("遍历循环队列的值:%d\n",val);

        }
    }
}