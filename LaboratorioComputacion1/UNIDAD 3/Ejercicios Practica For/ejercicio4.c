#include<stdlib.h>
#include<stdio.h>

/*Imprimir la suma de los números impares 
que se encuentran entre los números 1 y 10.*/

int main()
{
    int suma = 0;
    
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            suma = suma + i;
        }
    }
    printf("La suma de los numeros impares es: %d\n", suma);
    
    system("pause");
    return 0; 

}