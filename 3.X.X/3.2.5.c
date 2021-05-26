#include <stdio.h>
#include <stdlib.h>

///foo(ptr,ptr)

int sum_ptr(int*, int*);

int main()
{
    const int A = 5;
    const int B = 7;
    int* a = &A;
    int* b = &B;
    printf("%d", sum_ptr(a,b));
    return 0;
}

int sum_ptr(int* ptra, int* ptrb){
    return *ptra + *ptrb;
}
