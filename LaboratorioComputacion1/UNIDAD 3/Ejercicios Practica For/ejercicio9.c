#include<stdio.h>
#include<stdlib.h>

/*Escriba un programa que escriba la tabla de multiplicar del 1, 2,....,9*/

void main()
{
    int multiplo;

    multiplo = 0;

    for (int j = 1; j <= 9; j++)
    {
        printf("Tabla del multiplicador del %d\n", j);
        for (int i = 0; i <= 10; i++)
        {
         multiplo = i + j;
         printf("%d X %d = %d \n");
        }
    }
}