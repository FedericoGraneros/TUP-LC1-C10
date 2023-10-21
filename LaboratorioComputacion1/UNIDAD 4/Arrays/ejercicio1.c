/*1. Declarar un array de tipo entero de 5 elementos, asignarles un valor, mostrar de la
forma: “Índice: X, Valor: Y” en el orden ingresado y de atrás hacia adelante. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edades[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        printf("Indice: %d Valor: %d\n", i + 1, edades[i]);
        }

    printf("De atras hacia adelante. \n");

        for (int i = 5-1; i >= 0; i--)
    {
        printf("Indice: %d Valor: %d\n", i + 1, edades[i]);
    }

    system("pause");
    return 0;

}