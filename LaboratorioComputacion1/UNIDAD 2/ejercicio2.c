// Ingresar tres valores, sumarlos e imprimir esa suma.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int num3;
    int total;

    printf("Ingrese un numero: ");
    scanf("%i", &num1);

    printf("Ingrese su segundo numero: ");
    scanf("%i", &num2);

    printf("Ingrese su tercer numero: ");
    scanf("%i", &num3);

    total = num1 + num2 + num3;

    printf("Su total es: %i\n", total);

    system("pause");
    return 0;
}