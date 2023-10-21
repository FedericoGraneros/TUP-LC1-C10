/*8. Leer 10 números por teclado, 5 para un array y 5 para otro array distinto. Mostrar los
10 números en pantalla mediante un solo array. */

#include<stdlib.h>
#include<stdio.h>


int main()
{

int array [5];
int array2 [5];
int array3 [10];


printf("PRIMER TANDA\n");
for (int i = 0; i < 5; i++)
{
    printf("Escriba el numero %d/5: ", i+1);
    scanf("%d", &array[i]);
}

printf("SEGUNDA TANDA\n");
for (int i = 0; i < 5; i++)
{
    printf("Escriba el numero %d/5: ", i+1);
    scanf("%d", &array2[i]);
}

for (int i = 0; i < 5; i++)
{
    array3[i] =  array[i];
}

for (int i = 0; i < 5; i++)
{
  array3[i + 5] = array2[i];
}


printf("\n");
printf("Los numeros son: \n");

for (int i = 0; i < 10; i++)
{
    printf("%d-", array3[i]);
}

system("pause");
return 0;

}

