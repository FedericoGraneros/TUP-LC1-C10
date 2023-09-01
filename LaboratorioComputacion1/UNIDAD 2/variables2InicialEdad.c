#include <stdio.h>
#include <stdlib.h>

int main()
{
    char inicialUsuario; //en "char" solo se puede poner un caracter
    int edadUsuario;

    printf("Ingrese su inicial: ");
    scanf("%c", &inicialUsuario);

    printf("Ingrese su edad: ");
    scanf("%i", &edadUsuario);

    printf("Hola %c, tu edad es %i. \n", inicialUsuario, edadUsuario);

    system("pause"); // es para que la consola no se cierre
    return 0;
}