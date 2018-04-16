#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "LinkedList.h"
#include "Point.h"



int main() {
    printf("Hello, World!\n");


    int len;
    printf("输入链表长度:");
    scanf("%d",&len);
//    PNODE pHead = createHead_linkedList(len);
    PNODE pHead = createTail_linkedList(len);
//    PNODE pHead = createTail2_linkedList();
//    PNODE  pHead = createHead2_linkedList();
    traverse_linkedList(pHead);

    insert_linkedList(pHead,3,11);
    traverse_linkedList(pHead);

    return 0;
}
