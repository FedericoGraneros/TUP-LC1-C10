#include<stdio.h>

void main()
{
    int valor;

    printf("Ingrese un valor entero (0 para finalizar): ");

    do
    {
        scanf("%d", &valor);

        if(valor !=0)
        {
            printf("Valor ingresa=%d\n", valor);
        }
    } while (valor != 0);
    
}