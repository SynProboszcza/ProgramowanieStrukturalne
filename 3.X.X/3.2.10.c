#include <stdio.h>
#include <stdlib.h>

double *foo();

int main(){
    printf("%p\n", foo());
    return 0;
}

double* foo(){
    double nice = 0;
    printf("%p\n",&nice);
    return &nice;
}
