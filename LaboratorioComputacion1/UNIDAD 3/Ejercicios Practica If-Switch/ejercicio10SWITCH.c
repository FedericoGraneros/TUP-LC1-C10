#include <stdio.h>
#include <stdlib.h>

/*Pedir al usuario que ingrese un número del 1 al 12 e indicar a qué mes corresponde
dicho número (por ejemplo: si ingresa el número 2 se deberá mostrar febrero en la
consola, si ingresa el 8, agosto, etc.) (realizar el ejercicio primero utilizando estructura
if y luego estructura switch).*/

int main()
{
    int numeroMes = 0;

    printf("Ingrese el numero del mes que desea conocer: ");
    scanf("%d", &numeroMes);

    switch (numeroMes)
    {
    case 1:
        printf("El mes 1 Enero.\n");
        break;
    case 2:
        printf("El mes 2 Febrero. \n");
        break;
    case 3:
        printf("El mes 3 Marzo. \n");
        break;
    case 4:
        printf("El mes 4 Abril. \n");
        break;
    case 5:
        printf("El mes 5 Mayo. \n");
        break;
    case 6:
        printf("El mes 6 Junio. \n");
        break;
    case 7:
        printf("El mes 7 Julio. \n");
        break;
    case 8:
        printf("El mes 8 Agosto. \n");
        break;
    case 9:
        printf("El mes 9 Septiembre. \n");
        break;
    case 10:
        printf("El mes 10 Octubre. \n");
        break;
    case 11:
        printf("El mes 11 Noviembre. \n");
        break;
    case 12:
        printf("El mes 12 Diciembre. \n");
        break;

    default:
        printf("Opcion invalida.");
        break;
    }
}