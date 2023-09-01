#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*Ingresar dos valores, calcular su suma, su producto y la resta del 1ro menos el 2do
valor ingresado, imprimir los resultados*/

int main()
{
    int num1, num2, sumaNros, productoNros, restaNros;

    printf("Ingrese dos numeros: ");
    scanf("%i", &num1);
    scanf("%i", &num2);

    sumaNros = num1 + num2;

    productoNros = num1 * num2;

    restaNros = num1 - num2;

    printf("La suma de ambos es: %i\n", sumaNros);
    printf("El producto de ambos: %i\n", productoNros);
    printf("Resta del primero menos el segundo: %i\n", restaNros);

    system("pause");
    return 0;
}
