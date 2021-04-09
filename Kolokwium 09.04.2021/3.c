#include <stdio.h>
#include <stdlib.h>

int suma(int);

int main()
{
    int n = 0;
    printf("Podaj liczbe wieksza niz 4:\n");
    scanf("%d", &n);
    printf("%d\n", suma(n));
    return 0;
}
///5..n+2
int suma(int n){
	if(n<5){
		return -1;
	}
	else {
		int suma = 0;
		for(int i=5; i<=n+2; i++){
			suma +=i;
		}
		return suma;
	}
}


