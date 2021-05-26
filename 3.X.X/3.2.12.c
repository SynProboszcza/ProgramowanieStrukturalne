#include <stdio.h>
#include <stdlib.h>

/// Napisz funkcję, która dostaje jako argument dodatnią liczbę całkowitą
/// n, rezerwuje w pamięci blok n zmiennych typu double i zwraca jako
/// wartość wskaźnik do początku zarezerwowanego bloku pamięci.

int * foo(int n);

int main()
{
    printf("Hello world!\n");
    printf("%p", foo(78));
    return 0;
}

int * foo(int n){
    int tab[n];
    return &tab;
}
