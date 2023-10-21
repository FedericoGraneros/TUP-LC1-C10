/*Dado el vector {10, 20, 5, 15, 30, 20}
a. Informar el vector de la forma: "Indice: X, Valor: Y".
b. Totalizar el vector e informar el total.
c. Informar el contenido de las posiciones impares.
d. Informar las posiciones que contienen números impares.
e. Informar el mayor número.
f. Informar cuántas veces aparece el número 20. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[6] = {10, 20, 5, 15, 30, 20};
    int total = 0;
    int vecesNum20 = 0;
    int numMayor = 0;

    printf("A - Vector en forma Indice: X, Valor: Y.\n");

    for (int i = 0; i < 6; i++)
    {

        printf("Indice: %d Valor: %d \n", i + 1, num[i]);

        total = total + num[i];

        if (num[i] == 20)
        {
            vecesNum20 = vecesNum20 + 1;
        }

        if (numMayor > num[i])
        {
            numMayor = num[i];
        }
    }

    printf("B - Total de su suma: %d\n", total);


    printf("C - Valor de los impares: \n");
    for (int i = 0; i < 6; i++)
    {
        if (num[i] % 2 != 0)
        {
            
            printf(" - Valor: %d\n", num[i]);
        }
    }


       printf("D - Posicion de los impares: \n");
        for (int i = 0; i < 6; i++)
    {
        if (num[i] % 2 != 0)
        {
            
            printf(" - Posicion: %d\n", i + 1);
        }
    }

    printf ("E - El mayor numero: %d\n", numMayor);

    printf ("F - Veces que aparece el numero 20: %d\n", vecesNum20);

    

    system("pause");
    return 0;
}