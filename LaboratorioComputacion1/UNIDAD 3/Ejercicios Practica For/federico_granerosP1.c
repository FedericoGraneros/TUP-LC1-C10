/*Ejercicio 3
Realice un programa en lenguaje que pueda calcular la factorial de un número ingresado.
El factorial de un número es el producto de todos los números desde el 1 hasta llegar a él.
El número ingresado se debe validar mediante una sentencia while que sea positivo y no
permitir salir hasta no ingresar un número positivo. */

#include <stdio.h>
#include <stdlib.h>
void main()
{
 int num, numPor;
 int factorial = 1;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

while (num <= 0)
{
    printf("Numero invalido. Vuelva a ingresar: ");
    scanf("%d", &num);
}

for (int i = 1; i <= num; i++)
{
  factorial *= i;
}

  printf("El factorial de %d es %d\n", num, factorial);


}

/*Ejercicio 2: La respuesta correcta es la "C". */

/*  
    if (caracter >= 'a' && caracter <= 'z')
    {
        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' ||
            caracter == 'u')
        {
            printf("El caracter '%c' es una vocal.\n", caracter);
        }
        else
        {
            printf("El caracter '%c' es una consonante.\n", caracter);
        }
    }
    else
    {
        printf("El caracter ingresado no es una letra min%cscula.\n", 163);
    }
    system("pause");
    return 0;
    }
*/


