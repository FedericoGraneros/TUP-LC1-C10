/*4- Solicitar ingresar dos lados de un triángulo rectángulo y calcular, la hipotenusa, el
perímetro, la superficie. Imprima los resultados de las operaciones solicitadas.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float lado1, lado2, perimetro, hipotenusa, superficie;

    //Solicitar ingresar los dos lados del triangulo rectangulo
    printf("Ingrese 2 lados de un triangulo rectangulo:\n");
    scanf("%f", &lado1);
    scanf("%f", &lado2);

    //Calcular la hipotenusa
    hipotenusa = sqrt(lado1 * lado1 + lado2 * lado2);

    //Calcular el perimetro del triangulo rectangulo
    perimetro = lado1 + lado2 + hipotenusa;

    //Calcular la superficie
    superficie = (lado1 + lado2) / 2;

    //Imprimir los resultados
    printf("La hipotenusa es: %f\n", hipotenusa);
    printf("El perimetro es: %f\n", perimetro);
    printf("La superficie es: %f\n", superficie);

    system("pause");
    return 0;
}