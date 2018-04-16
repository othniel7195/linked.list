//
// Created by zf on 2018/4/12.
//
#include <stdio.h>
#include  "Point.h"

void pointProblem(){
    int  var[] = {10, 100, 200,300};
    printf("打印数组:%d\n",var[0]);
    int  i, *ptr, *ptr2, *ptr3;

    /* 指针中的数组地址 */
    ptr = &var;
    ptr2 = var;
    ptr3 = &var[0];

    for ( i = 0; i < 4; i++)
    {

        printf("存储地址：var[%d] = %x,%x,%x\n", i, ptr,ptr2,ptr3);
        printf("存储值：var[%d] = %d,%d,%d\n", i, *ptr , *ptr2,*ptr3);

        /* 移动到下一个位置 */
        ptr++;
        ptr2++;
        ptr3++;
    }


    char names[] = "Zara Ali";//等价于 char names[]= {'Z','a','r','a','','A','l','i','\0'}
    char names1[]= {'Z','a','r','a',' ','A','l','i','\0'};
    int i1 = 0;
    char *ptr4 ;
    ptr4 = &names[0];

    for ( i1 = 0; i1< 4; i1++)
    {
        printf("Value of names[%d] = %s, %s,%s, %s\n", i1, ptr4 ,&names,names,&names1[0]);
        ptr4++;
    }


    printf("=============================\n");

    Books book1;
    strcpy(book1.title,"我的世界");
    strcpy(book1.author,"赵锋");
    book1.book_id = 7295;

    printBook(&book1);

    printf("=================================\n");
    union Data data;
    data.i = 100;
    printf("%d\n",data.i);
    data.f = 100.0;
    printf("%f\n",data.f);


    moreVars(5,1,4,6,8,10);
};

void printBook(Books *book){
    printf("book1 title:%s\n",book->title);
    printf("book1 author:%s\n",book->author);
    printf("book1 id:%d\n",book->book_id);
}

void moreVars(int num,...){

    va_list  vaList;

    int sum = 0;
    va_start(vaList,num);

    for (int i = 0; i < num; ++i) {
        sum += va_arg(vaList, int);

    }

    va_end(vaList);

    printf("sum:%d\n",sum);

}