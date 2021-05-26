#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int potega(int n, int m);

int main()
{
    printf("%d", potega(4,0));
    return 0;
}


int potega(int n, int m){
    return pow(n,m);
}
