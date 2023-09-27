#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float num1, num2, resultadoSuma, resultado;
    int opcionElegida, cantOperaciones;

    cantOperaciones = 0;

    printf("Ingrese un primer n%cmero: ", 163); /*El %c es para decirle q ahi va un caracter con un codigo, en este caso U con acento es 163*/
    scanf("%f", &num1);


// validacion con while
    while (num1 <= 0) //cuando pida que sean numeros positivos tienen q ser menor o igual a cero.
    {
        printf("N%cmero invalido.\n", 163);
        printf("Ingrese un primer n%cmero: ", 163); /*El %c es para decirle q ahi va un caracter con un codigo, en este caso U con acento es 163*/
        scanf("%f", &num1);
    }
// validacion con do-while
    do
    {
        printf("Ingrese el segundo n%cmero: ", 163);
        scanf("%f", &num2);

        if (num2 <= 0)
        {
            printf("N%cmero invalido.\n", 163);
        }
    } while (num2 <= 0);

    do
    {

        printf("Seleccione que desea hacer:\n");
        printf("1. Informar su suma.\n");
        printf("2. Informar su resta.\n");
        printf("3. Informar su multiplicaci%cn\n", 162);
        printf("4. Informar su divisi%cn.\n", 162);
        printf("5. Informar la cantidad de operaciones realizadas.\n");
        printf("6. Salir.\n");
        scanf("%d", &opcionElegida);

        switch (opcionElegida)
        {
        case 1:
            resultado = num1 + num2;
            printf("La suma es: %.2f\n", resultado);
            cantOperaciones = cantOperaciones + 1;
            break;
        case 2:
            resultado = num1 - num2;
            printf("La resta es: %.2f\n", resultado);
            cantOperaciones = cantOperaciones + 1;
            break;
        case 3:
            resultado = num1 * num2;
            printf("La multiplicaci%cn es: %.2f\n", 162, resultado);
            cantOperaciones = cantOperaciones + 1;
            break;
        case 4:
            resultado = num1 / num2;
            printf("La divisi%cn es: %.2f\n", 162, resultado);
            cantOperaciones = cantOperaciones + 1;
            break;
        case 5:
            printf("La cantidad de operaciones realizadas es: %d\n", cantOperaciones);
            break;
        case 6:
            printf("Saliendo del programa.\n");
            return 1;
            break;

        default:
            printf("Opci%cn no v%clida.\n", 162, 160);
        }
    } while (opcionElegida != 6);

    system("pause");
    return 0;
}