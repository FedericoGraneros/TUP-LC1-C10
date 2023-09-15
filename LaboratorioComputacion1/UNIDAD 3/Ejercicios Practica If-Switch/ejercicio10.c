#include <stdio.h>
#include <stdlib.h>

/*Pedir al usuario que ingrese un número del 1 al 12 e indicar a qué mes corresponde
dicho número (por ejemplo: si ingresa el número 2 se deberá mostrar febrero en la
consola, si ingresa el 8, agosto, etc.) (realizar el ejercicio primero utilizando estructura
if y luego estructura switch).*/

int main()
{
    int numeroMes = 0;

    printf("Ingrese el numero para saber a que mes corresponde: ");
    scanf("%d", &numeroMes);

    if (numeroMes == 1)
    {
        printf("El mes 1 Enero.\n");
    }
    else if (numeroMes == 2)
    {
        printf("El mes 2 es Febrero.\n");
    }
    else if (numeroMes == 3)
    {
        printf("El mes 3 es Marzo. \n");
    }
    else if (numeroMes == 4)
    {
        printf("El mes 4 es Abril. \n");
    }
    else if (numeroMes == 5)
    {
        printf("El mes 5 es Mayo. \n");
    }
    else if (numeroMes == 6)
    {
        printf("El mes 6 es Junio. \n");
    }
    else if (numeroMes == 7)
    {
        printf("El mes 7 es Julio. \n");
    }
    else if (numeroMes == 8)
    {
        printf("El mes 8 es Agosto. \n");
    }
    else if (numeroMes == 9)
    {
        printf("El mes 9 es Septiembre. \n");
    }
    else if (numeroMes == 10)
    {
        printf("El mes 10 es Octubre. \n");
    }
    else if (numeroMes == 11)
    {
        printf("El mes 11 es Noviembre. \n");
    }
    else if (numeroMes == 12)
    {
        printf("El mes de 12 es Diciembre. \n");
    }
    else
    {
        printf("Numero invalido. \n");
    }
    
}