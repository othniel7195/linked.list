#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "LinkedList.h"
#include "Point.h"
#include "linkedStack.h"
#include "linkedQueue.h"
#include "arrayStack.h"
#include "arrayQueue.h"

int main() {
    printf("Hello, World!\n");


    int len;
//    printf("输入链表长度:");
//    scanf("%d",&len);
//    PNODE pHead = createHead_linkedList(5);
//    PNODE pHead = createTail_linkedList(len);
//    PNODE pHead = createTail2_linkedList();
//    PNODE  pHead = createHead2_linkedList();
//    traverse_linkedList(pHead);

//    insert_linkedList(pHead,6,11);
//    int remove_var = -1;
//    remove_linkedList(pHead,3, &remove_var);
//
//    printf("remove.value:%d\n",remove_var);
//    traverse_linkedList(pHead);

//    LkSTACK stack;
//    create(stack);
//    for (int i = 0; i < 5 ; ++i) {
//        printf("第%d次压栈\n",i+1);
//        int var;
//        scanf("%d",&var);
//        push_stack(stack,var);
//    }
//
//    traverse_stack(stack);
//
//    for (int j = 0; j <5 ; ++j) {
//        int pop_val=-1;
//        pop_stack(stack,&pop_val);
//        printf("出栈的数据:%d\n",pop_val);
//    }

//    LkQUEUE queue;
//    create_queue(queue);
//    for (int i = 0; i < 5 ; ++i) {
//        printf("第%d次入队\n",i+1);
//        int var;
//        scanf("%d",&var);
//        in_queue(queue,var);
//    }
//
//    traverse_queue(queue);
//
//    for (int j = 0; j <5 ; ++j) {
//        int out_val=-1;
//        out_queue(queue,&out_val);
//        printf("出队的数据:%d\n",out_val);
//    }

//    ArrSTACK stack;
//    create_arr_stack(stack);
//    for (int i = 0;i < 5 ; ++i){
//
//        printf("数组第%d次入栈\n",i+1);
//        int var;
//        scanf("%d",&var);
//        push_arr_stack(stack,var);
//
//    }
//
//    traverse_arr_stack(stack);
//
//    for (int j = 0; j < 5; ++j) {
//        int var;
//        pop_arr_stack(stack,&var);
//        printf("数组出栈%d\n",var);
//    }
//
//    traverse_arr_stack(stack);


    printf("循环队列开始------------\n");
    ArrQUE queue;
    create_arr_queue(queue);

    for (int i = 0; i < 5; ++i) {

        printf("循环队列第%d次入队\n",i+1);
        int var;
        scanf("%d",&var);
        in_arr_queue(queue,var);
    }

    printf("循环队列第一遍历-----------\n");
    traverse_arr_queue(queue);

    for (int j = 0; j < 8 ; ++j) {
        int var = -1;
        out_arr_queue(queue,&var);
        printf("循环队列出队数据:%d\n",var);
    }

    printf("循环队列第二遍历-----------\n");
    traverse_arr_queue(queue);


    return 0;
}
