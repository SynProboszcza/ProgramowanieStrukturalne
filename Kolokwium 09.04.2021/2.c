#include <stdio.h>
#include <stdlib.h>

void zamien(int[]);

int main()
{
    printf("Podaj 7 liczb!\n");
    int lista[7];
    for(int i=0; i<7; i++){
    	printf("\nPodaj %d liczbe:", i+1);
    	scanf("%d", &lista[i]);
    }

    zamien(lista);
    return 0;
}

void zamien(int lista[]){
	int nowalista[7];
    for(int i=0; i<7; i++){
    	nowalista[i] = (lista[i])/5;
    }
    int i=0;
    while(i!=7){
    	printf("%d\n",nowalista[i]);
    	i++;
    }
}
