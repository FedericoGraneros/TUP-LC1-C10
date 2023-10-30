#include<stdlib.h>
#include<stdio.h>

/*8. Leer 10 números por teclado, 5 para un array y 5 para otro array distinto. Mostrar los
10 números en pantalla mediante un solo array. */


int main()
{

int array [5]; // hago un array
int array2 [5]; // hago el otro
int array3 [10]; // hago uno donde entren los dos


printf("PRIMER TANDA\n");
for (int i = 0; i < 5; i++)   // lleno el primero
{
    printf("Escriba el numero %d/5: ", i+1);
    scanf("%d", &array[i]);
}

printf("SEGUNDA TANDA\n"); // lleno el segundo
for (int i = 0; i < 5; i++)
{
    printf("Escriba el numero %d/5: ", i+1);
    scanf("%d", &array2[i]);
}

for (int i = 0; i < 5; i++) //lleno el mas grande con el primero
{
    array3[i] =  array[i];
}

for (int i = 0; i < 5; i++) // lleno el mas grande con lo que le queda al segundo
{
  array3[i + 5] = array2[i]; // acordandome que en este caso es + 5
}


printf("\n");
printf("Los numeros son: \n"); // los muestro easy

for (int i = 0; i < 10; i++)
{
    printf("%d-", array3[i]);
}

system("pause");
return 0;

}

