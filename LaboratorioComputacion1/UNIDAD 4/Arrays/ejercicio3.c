/*Declarar un array de tipo entero de 5 componentes, asignarles un valor por consola,
mostrar cuántas veces se repite el número 5. */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num[5];

    int contador = 0;

    for(int i = 0; i < 5; i++)
    {
        printf("Ingrese el %d numero: ", i+1);
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < 5; i++)
    {
        if (num[i] == 5)
        {
            contador = contador + 1;
        }
    }

    printf("El numero 5 se repite %d veces.\n", contador);

    system("pause");
    return 0;
}
