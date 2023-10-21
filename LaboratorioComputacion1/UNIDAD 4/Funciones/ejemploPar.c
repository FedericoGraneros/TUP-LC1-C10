/*Escriba un programa que pida ingresar el numero y a continuacion
escriba en la consola si el mismo es par o impar.*/

/*Escriba una funcion llamda EsPar que reciba un nro entero y que
devuelva 1 si el numero ingresado es par, cero en caso contrario.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// hacer un programa que muestre el cuadrado de un numero si es impar y el cubo del numero si es par
int main()
{

    int numero, numeroPar;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    numeroPar = esPar(numero);

    if (numeroPar == 1)
    {
        printf("El nro es par ysu cubo es: %d.\n", pow(numero, 3));
    }
    else
    {
        printf("El nro es impar y su cuadrado es: %d.\n", pow(numero, 2));
    }

    system("pause");
    return 0;
}

// La fauncion EsPar
int esPar(int num)
{
    int resultado = 0;

    if (num % 2 == 0)
    {
        resultado = 1;
    }

    return resultado;
}