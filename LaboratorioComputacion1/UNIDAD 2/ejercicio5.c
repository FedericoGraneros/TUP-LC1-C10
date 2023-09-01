#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*El usuario debe poder ingresar los lados de un rectángulo y el programa calcula con
esos datos la diagonal principal del rectángulo, superficie y perímetro. Mostrar al
usuario los resultado*/

int main()
{
    float resultado, lado1, lado2;

    printf("Ingresar el lado del rectangulo: ");
    scanf("%f", &lado1);

    printf("Ingresar el otro lado del rectangulo: ");
    scanf("%f", &lado2);

    resultado = pow(lado1, 2) + pow(lado2, 2);
    
    resultado = sqrt(resultado);
    printf("Esta es la diagonal principal del rectangulo: %f\n", resultado);

    //superficie
    resultado = (lado1 * lado2);
    printf("Superficie: %f\n", resultado);

    //perimetro
    resultado = 2 * (lado1 + lado2);
    printf("Perimetro: %f\n", resultado);

    system("pause");
    return 0;
}