#include<stdlib.h>
#include<stdio.h>

/*Dado un número introducido por el usuario, indicar si este es positivo, negativo o nulo*/


int main()
{
    int numUsuario;

    printf("Ingrese un numero: \n");
    scanf("%i", &numUsuario);

    if (numUsuario > 0)
    {
        printf("El numero es positivo.\n");
    }
    else if (numUsuario < 0 )
    {
        printf("El numero es negativo.\n");
    }
    else
    {
        printf("El numero es nulo.\n");
    }

    system("pause");
    return 0;
}