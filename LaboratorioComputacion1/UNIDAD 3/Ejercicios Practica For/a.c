#include <stdio.h>
#include <stdlib.h>

void main(){
    int num = 0;
    int factorial = 1;
    int contador = 0;

    printf("Ingrese un numero entero: ");
    scanf("%i", &num);
    while (num < 1)
    {
        printf("El numero ingresado es el incorrecto.\nIngrese un numero entero positivo: ");
        scanf("%i", &num);
    }
    do
    {
        contador++;
        printf("%i", contador);
        factorial = factorial * contador ;
    } while (contador < num);
    
    printf("El factorial del numero %i es: %i\n",num, factorial);
    system("pause");
}