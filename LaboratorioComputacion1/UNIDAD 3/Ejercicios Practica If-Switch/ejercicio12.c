#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*12- Realizar un programa que permita registrar los datos para una venta de $4600. Para
ello, se le pedirá al usuario que ingrese su DNI, validar que dicho número no sea menor
que 1000000 ni mayor que 99999999. Luego, requerir al usuario que seleccione el
medio de pago: 1-Efectivo, 2-Tarjeta de crédito, si selecciona tarjeta, pedir que ingrese
una opción de las siguientes: 1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal.
Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o 12). El interés por
pagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas y 8% para
6 y 12 cuotas. Validar que todos los datos ingresados por el usuario sean correctos, en
caso contrario informar la situación y finalizar programa. Por último, presentar un
resumen de la operación, por ejemplo:

DNI: 38.456.123
Medio de pago: Tarjeta de crédito
Tarjeta: Cabal
Cuotas: 3
Total: $4784*/

int main()
{
    int venta = 4600;
    int DNI, metodoPago, opcionTarjeta, cantCuotas;
    int ventaConInteres;

    printf("Ingrese su DNI: ");
    scanf("%d", &DNI);

    if (DNI < 1000000 || DNI > 99999999)
    {
        printf("DNI invalido.\n");
        return 1;
    }
    else
    {

        printf("Seleccione el metodo de pago: \n");
        printf("1 - Efectivo. \n");
        printf("2 - Tarjeta de credito. \n");
        scanf("%d", &metodoPago);
    }

    switch (metodoPago)
    {
    case 1:
        printf("DNI: %d\n", DNI);
        printf("Metodo de pago: Efectivo. \n");
        printf("Total: %d\n", venta);
        break;

    case 2:
        printf("Seleccione que opcion desea: \n");
        printf("1 - VISA. \n");
        printf("2 - American Express. \n");
        printf("3 - Mercado Pago. \n");
        printf("4 - Cabal. \n");
        scanf("%d", &opcionTarjeta);

        if (opcionTarjeta != 1 && opcionTarjeta != 2 && opcionTarjeta != 3 && opcionTarjeta != 4)
        {
            printf("Opcion invalida.");
            return 1;
        }

        else
        {
            printf("Seleccione la cantidad de cuotas:\n");
            printf("1 - Para 1 cuota sin interes. \n");
            printf("3 - Para 3 cuotas con un 4%% de interes. \n");
            printf("6 - Para 6 cuotas con 8%% de interes. \n");
            printf("12 - Para 12 cuotas con 8%% de interes. \n");
            scanf("%d", &cantCuotas);
        }

        if (cantCuotas == 3)
        {
            ventaConInteres = venta * 1.04;
        }
        else if (cantCuotas ==  3 || cantCuotas == 12)
        {
            ventaConInteres = venta * 1.08;
        }
        else
        {
            printf("Cantidad de cuotas invalida. \n");
            return 1;
        }

        printf("DNI: %d\n", DNI);
        printf("Metodo de pago: Tarjeta - ");
        switch (opcionTarjeta)
        {
        case 1:
            printf("VISA. \n");
            break;
        case 2:
            printf("American Express. \n");
            break;
        case 3:
            printf("Mercado Pago.");

        case 4:
            printf("Caba. \n");
            break;
        }
        printf("Cuotas: %d\n", cantCuotas);
        printf("Total: %d\n", ventaConInteres);
        break;

    default:
        printf("Opcion invalida.");
        break;
    }
    system("pause");
    return 0;
}