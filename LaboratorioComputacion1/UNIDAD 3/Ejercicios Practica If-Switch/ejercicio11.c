
/*11- Pedir al usuario que ingrese dos números (permitir ingresar número con decimales).
Luego presentar el siguiente menú:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Salir
Seleccione una operación:
Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el
programa debe terminar.*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float num1, num2, resultado;
    int opcionElegida;

    printf("Ingrese un primer n%cmero: ", 163); /*El %c es para decirle q ahi va un caracter con un codigo, en este caso U con acento es 163*/
    scanf("%f", &num1);

    printf("Ingrese el segundo n%cmero: ", 163);
    scanf("%f", &num2);

    printf("Seleccione que desea hacer:\n");
    printf("1. Informar su suma.\n");
    printf("2. Informar su resta.\n");
    printf("3. Informar su multiplicaci%cn\n", 162);
    printf("4. Informar su divisi%cn.\n", 162);
    printf("5. Salir.\n");
    scanf("%d", &opcionElegida);

    switch (opcionElegida)
    {
    case 1:
        resultado = num1 + num2;
        printf("La suma es: %.2f\n", resultado);
        break;
    case 2:
        resultado = num1 - num2;
        printf("La resta es: %.2f\n", resultado);
        break;
    case 3:
        resultado = num1 * num2;
        printf("La multiplicaci%cn es: %.2f\n", resultado, 162);
        break;
    case 4:
        resultado = num1 / num2;
        printf("La divisi%cn es: %.2f\n", resultado, 162);
        break;
    case 5:
        printf("Saliendo del programa.\n");
        return 0;
        break;

    default:
        printf("Opci%cn no v%clida.\n", 162, 160);
    }
    system("pause");
    return 0;
}