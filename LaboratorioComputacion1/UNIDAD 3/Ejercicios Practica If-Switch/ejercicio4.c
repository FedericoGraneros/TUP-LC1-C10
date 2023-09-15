#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*Ingresar por teclado tres números, determinar cuál es el mayor y visualizarlo en
pantalla.*/

void main()
{
    int num1, num2, num3, mayor;

    num1 = 0;

    num2 = 0;

    num3 = 0;

    mayor = 0;

    printf("Ingrese un primer numero: ");
    scanf("%i", &num1);

    if (num1 > mayor)
    {
        mayor = num1;
    }

    printf("Ingrese un segundo numero: ");
    scanf("%i", &num2);

    if (num2 > mayor)
    {
        mayor = num2;
    }

    printf("Ingrese un tecer numero: ");
    scanf("%i", &num3);

    if(num3 > mayor)
    {
       mayor = num3;
    }

    printf("El numero mayor es: %i\n", mayor);

    system("pause");
}