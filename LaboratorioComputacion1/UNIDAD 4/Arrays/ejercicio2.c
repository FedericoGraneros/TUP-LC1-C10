/*Declarar un array de tipo entero de 5 componentes, asignarles un valor, mostrar la
suma de sus componentes y el promedio. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[5] = {10, 20, 30, 40, 50};

    int suma = 0;

    float promedio = 0;

    for(int i = 0; i < 5; i++)
    {
        suma = suma + num[i];
    }

    promedio = suma / 5;

    printf("La suma de sus componentes es: %d\n", suma);
    printf("El promedio es: %.2f\n", promedio);
}