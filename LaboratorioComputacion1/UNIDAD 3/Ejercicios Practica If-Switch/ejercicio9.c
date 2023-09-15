#include<stdlib.h>
#include<stdio.h>

/*Se desea escribir un algoritmo que pida la altura de una persona, si la altura es menor
o igual a 150 cm envíe el mensaje: “Persona de altura por debajo de la media”; si la
altura está entre 151 y 170 escriba el mensaje: “Persona de altura media” y si la altura
es mayor al 171 escriba el mensaje: “Persona de altura por arriba de la media”*/

int main()
{
    float alturaPersona = 0;

    printf("Ingrese su altura: ");
    scanf("%f", &alturaPersona);

    if (alturaPersona <= 1.50)
    {
        printf("Persona de altura por debajo de la media. \n");
    }
    else if (alturaPersona > 1.50 && alturaPersona < 1.71)
    {
        printf("Persona de altura media. \n");
    }
    else if (alturaPersona > 1.71)
    {
        printf("Persona de altura por encima de la media. \n");
    }

    system("pause");
    return 0;    
}