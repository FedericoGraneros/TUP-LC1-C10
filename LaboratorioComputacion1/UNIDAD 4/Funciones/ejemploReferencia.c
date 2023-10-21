#include<stdlib.h>
#include<stdio.h>

int intercambio(int *a, int *b); // prototipo de la funcion intercambio

void main()
{
    int i = 3, j = 50;
    printf("i = %d y j = %d \n", i, j);

    intercambio(&i, &j); // se pasan a la funcion intercambio() las direcciones de variables i y j
    
    printf("i = %dd y j = %d \n", i, j);

    system("pause");
    return 0;
}

int intercambio (int *a, int *b)
{
    int aux = *a; // asigna a la variable axu el valor de la variable a la que apunta a (es dddedcir, la variable i)
    *a = *b; // asigna el valor de variable que a la que apunta B, a la variable que apunta a
    *b = aux;  // asigna el valor de aux a la variable que apunta b (es decir, la variable j)
}