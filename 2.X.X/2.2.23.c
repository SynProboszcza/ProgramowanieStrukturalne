  
#include <stdio.h>
#include <stdlib.h>

int ciagF(int n);

int main()
{
    printf("%d\n", ciagF(13));
    return 0;
}

int ciagF(int n){
    if(n<=1){
        return 1;
    }
    else{
        return ciagF(n-2)+ciagF(n-1);
    }
}
