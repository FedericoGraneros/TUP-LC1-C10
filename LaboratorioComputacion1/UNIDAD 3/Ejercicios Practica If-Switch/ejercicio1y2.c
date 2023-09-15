#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en
pantalla.*/
/*Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en
pantalla. Informar también si los números son iguales.*/

int main()
{
    int num1, num2, numMayor;

    printf("Ingrese un primer numero: ");
    scanf("%i", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%i", &num2);

    if (num1 > num2)
    {
        printf("El numero mayor es: %i\n", num1);
    }
    else if (num1 == num2)
    {
        printf("Ambos los numeros ingresados son iguales.\n");
    }
    else
    {
        printf("El numero mayors es: %i\n", num2);
    }
    
    system("pause");
    return 0;
}