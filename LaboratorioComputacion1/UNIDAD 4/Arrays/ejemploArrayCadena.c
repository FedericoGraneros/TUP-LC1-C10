#include <stdio.h>
#include <stdlib.h>

/*Leer por consola UN nombre y mostrarlo*/

int main()
{
    char nombreUsuario[20];

    printf("Ingrese su nombre: ");
    scanf("%s", &nombreUsuario);

    printf("El nombre ingresado es: %s.\n", nombreUsuario);

    system("pause");

}