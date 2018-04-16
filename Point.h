//
// Created by zf on 2018/4/12.
//

#ifndef C1_POINT_H
#define C1_POINT_H
#include <string.h>
#include <stdarg.h>
struct Books {
    char title[50];
    char author[100];
    int  book_id;
};

union Data{

    int i;
    float f;
    char s[20];
};

typedef struct Books  Books;

void printBook(Books *book);
void moreVars(int num,...);
void pointProblem();
#endif //C1_POINT_H
