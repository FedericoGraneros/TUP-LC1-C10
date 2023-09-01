#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Ingresar el valor de la hora y el tiempo trabajado por un comerciante, calcular su
sueldo e imprimirlo*/

int main()
{
    float valor_x_h_trabajada, tiempo_trabajado, sueldo_trabajador;

    printf("Ingresar horas trabajadas: ");
    scanf("%f", &tiempo_trabajado);

    valor_x_h_trabajada = 1000;

    sueldo_trabajador = valor_x_h_trabajada * tiempo_trabajado;
    
    printf("Su sueldo es de: %f\n", sueldo_trabajador);

    system("pause");
    return 0;
}