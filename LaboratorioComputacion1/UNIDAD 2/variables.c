#include <stdio.h>  //me permite llamar a la funcion printf
#include <stdlib.h> //me permite llamar a la funcion system

int main()
{
    int numero;          // declaracion de una variable
    int edad = 19;       // asignacion de un valor de una variable
    int borndate = 1990; // declaracion y asignacion de una variable

    printf("Ingrese 1 numero por favor: ");
    scanf("%i", &numero);

    printf("Su numero es %i\n", numero);

    system("pause");

    return 0;
}
