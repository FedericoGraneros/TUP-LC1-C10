#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num[6]; // Declaro un arreglo de tamano 6 tipo int

    num[0] = 5; // Almaceno 5 en el primer elemento del arreglo num

    num[1] = 8;

    num[5] = 12; // Almaceno 12 en el ultimo elemento del arreglo num

   // printf("El valor en el indice 5 esta almacenado en el valor %d", num[5]);



                    //0   1   2   3
   int numeros[4] = {30, 50, 40, 25}; // Podria sacarle el tamano y se entenderia igual ya que al asignar los valores se entiende que es de 0 a 3

   char ch[] = {'L', 'U', 'C', 'A', 'S'}; //Ejemplo pero no es una cadena de caracteres


   // primero pedir al usuario que ingrese las 8 edades, 
   // almacenarlas en un arreglo de nombre edades, 
   // luego mostrarlas y calcular su promedio.

   int edades[8];

   for (int i = 0; i < 8; i++)
   {
    printf("Ingrese la edad %d: ", i+1);
    scanf("%d", &edades[i]);
   }

   // Indice: X, Valor: Y

   for (int i = 0; i < 8; i++)
   {
     printf("Indice: %d, Valor: %d: \n", i + 1, edades[i]);
   }
    
    system("pause");
    return 0;
}