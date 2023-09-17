#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Pedir al usuario que ingrese 10 números reales, validar que los mismos sean valores
positivos, si el usuario ingresa un número negativo o nulo, pedir reingresar el número
(repetir el ingreso de dicho número mientras el número no sea correcto). Informar al
usuario la suma de los 10 números ingresados.*/

void main()
{
    int num = 0;
    int sumaNums = 0;

    for (int i = 1; i <= 10; i++)
    {
        do
        {
            printf("Ingrese 10 numeros reales: ");
            scanf("%i", &num);

            if (num <= 0)
            {
                printf("Numero invalido ingrese nuevamente: ");
            }
            else
            {
                sumaNums = sumaNums + num;
            }

        } while (num <= 0);
    }

    printf("La suma de los numeros es: %i\n", sumaNums);
    system("pause");
}
