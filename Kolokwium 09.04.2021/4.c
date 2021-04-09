#include <stdio.h>
#include <stdlib.h>

void wypisz(int[]);

int main()
{
    int tab[10];
    for(int i=0; i<10; i++){
    	printf("\nPodaj %d liczbe:", i+1);
    	scanf("%d", &tab[i]);
    }
    wypisz(tab);
    return 0;
}

void wypisz(int tab[]){
    int i=0;
    while(i!=10){
    	printf("%d\n",tab[i]);
    	if(tab[i]%2!=0){
    		printf("%d\n",tab[i]);
    	}
    	i++;
    }
}






