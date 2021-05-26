#include <stdio.h>
#include <stdlib.h>

int ciag(int n);

int main()
{
    printf("%d\n", ciag(20));
    return 0;
}

int ciag(int n){
    if(n==0){
        return 1;
    }
    else{
        return 2*ciag(n-1)+5;
    }
}
