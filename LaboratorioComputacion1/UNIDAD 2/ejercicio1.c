// Ingresar dos valores enteros, sumarlos e imprimir esta suma.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int total;

    printf("Ingrese un numero: ");
    scanf("%i", &num1);

    printf("Ingrese su segundo numero: ");
    scanf ("%i", &num2);

    total = num1 + num2;

    printf("Su total es: %i\n", total);

    system("pause");
    return 0;
}
