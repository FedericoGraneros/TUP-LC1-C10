#include<stdio.h>
#include<stdlib.h>

float sumar(float num1, float num2); // prototipo q pongo aca para hacerle saber al sistema

void main()
{
    float numero1, numero2, resultado;

    printf("Ingresa primer numero: \n");
    scanf("%f", &numero1);
    printf("Ingresa segundo numero: \n");
    scanf("%f", &numero2);

    resultado = sumar(numero1, numero2); // llamo a la funcion

    int numero3;

    printf("Ingresa tercer numero: \n");
    scanf("%f", &numero3);

    resultado = sumar(resultado, numero3);

    printf("La suma es: %f", resultado);
}

float sumar(float num1, float num2) /* esto va por orden, es decir no 
                                     es necesario q las variables tengan el mismo
                                     nombre ya que se asignan por orden. */
{
    float respuesta;
    respuesta = num1 + num2;
    return respuesta;
}

//PARAMETROS POR VALOR LE PASO EL VALOR Y SE COPIA EN EL PROTOTIPO.