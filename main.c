#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "LinkedList.h"
#include "Point.h"
#include "linkedStack.h"



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

    LkSTACK stack;
    create(stack);
    for (int i = 0; i < 5 ; ++i) {
        printf("第%d次压栈\n",i+1);
        int var;
        scanf("%d",&var);
        push_stack(stack,var);
    }

    traverse_stack(stack);

    for (int j = 0; j <5 ; ++j) {
        int pop_val=-1;
        pop_stack(stack,&pop_val);
        printf("出栈的数据:%d\n",pop_val);
    }



    return 0;
}
