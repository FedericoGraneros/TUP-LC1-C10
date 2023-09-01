// 3- Ingresar los lados de un triángulo calcular su perímetro e imprimirlo.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado1;
    float lado2;
    float lado3;
    float perimetro;

    printf("Ingrese el primer lado: ");
    scanf("%f", &lado1);

    printf("Ingrese el segundo lado: ");
    scanf("%f", &lado2);

    printf("Ingrese el tecer lado: ");
    scanf("%f", &lado3);

    perimetro = lado1 + lado2 + lado3;

    printf("El perimetro del triangulo es: %f\n", perimetro);

    system("pause");
    return 0;
}