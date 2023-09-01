#include <stdlib.h>
#include <stdio.h>

/*1- Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en
pantalla*/

void main()
{
    int num1, num2;

    printf("Ingrese el primero numero:\n");
    scanf("%i", &num1);

    printf("Ingrese el segundo numero:\n");
    scanf("%i", &num2);

    if (num1 > num2)
    {
        printf("El numero mayor es %i\n", num1);
    }
    else if (num1 == num2)
    {
        printf("Ambos numeros son iguales");
    }
    else
    {
        printf("El numero mayor es %i\n", num2);
    }
    system("pause");
}