#include <stdio.h>
#include <stdlib.h>

///f(pt,pt)
///zamiana gdy 2 arg jest mniejszy

void foo(int*, int*);

int main(){
    /*printf("Hello world!\n");
    int a = 3;
    int* pt = &a;
    printf("%d::%p", a, pt);*/
    int a = 5;
    int b = 1;
    int* ptr_a = &a;
    int* ptr_b = &b;
    printf("%d:::%d\n",a,b);
    foo(ptr_a, ptr_b);
    printf("%d:::%d",a,b);
    return 0;
}


void foo(int* ptra, int* ptrb){
    if(*ptrb < *ptra){
        int temp = *ptra;
        *ptra = *ptrb;
        *ptrb = temp;
    }
}
