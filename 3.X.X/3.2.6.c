#include <stdio.h>
#include <stdlib.h>

void foo(int n, int* w);

int main(){
    int q = 5;
    int ptr_q = &q;
    printf("%d\n",q);
    foo(7,ptr_q);
    printf("%d\n",q);
    return 0;
}

void foo(int n, int* w){
    *w = n;
}
