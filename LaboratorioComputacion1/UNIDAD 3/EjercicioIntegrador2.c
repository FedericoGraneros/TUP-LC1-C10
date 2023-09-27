/*Un empleado de un comercio debe registrar las ventas del día. Para ello, realizar un programa
que permita ingresar los datos de las ventas realizadas. Primero, requerir al empleado la
cantidad de ventas que necesita registrar. Luego, para cada venta deberá ingresar el DNI del
cliente (validar que dicho número no sea menor que 1000000 ni mayor que 99999999).
Ingresar el monto de la venta y el medio de pago: 1 - Efectivo, 2 - Tarjeta de crédito, si la venta
fue con tarjeta, pedir que ingrese una opción de las siguientes: 1 - Visa, 2 - American Express, 3
- Mercado Pago, 4 - Cabal. Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o
12). El interés por pagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas
y 8% para 6 y 12 cuotas, por lo se deberá calcular el importe a abonar dependiendo si la venta
es en efectivo o en cuotas. Validar que todos los datos ingresados por el empleado para una
venta sean correctos, en caso contrario informar la situación y finalizar la carga de la venta
actual. Para cada venta, presentar un resumen de la operación, por ejemplo:
DNI: 38.456.123
Medio de pago: Tarjeta de crédito
Tarjeta: Cabal
Cuotas: 3
Total: $4784
Al finalizar el registro, mostrar la suma total de las ventas ingresadas*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int cantVentas, venta, ventasTotal;
    int DNI, metodoPago, opcionTarjeta, cantCuotas;
    int ventaConInteres;

    ventasTotal = 0;

    printf("Ingrese la cantidad de ventas del dia: ");
    scanf("%d", &cantVentas);

    for (int i = 1; i <= cantVentas; i++)
    {
    venta = 0;
    DNI = 0;
    cantCuotas = 0;
    ventaConInteres = 0;
    metodoPago = 0;
    opcionTarjeta = 0;

    printf("Ingrese el monto de la venta %d: ", i);
    scanf("%d", &venta);

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
        ventasTotal = venta + ventasTotal;
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
        else if (cantCuotas ==  6 || cantCuotas == 12)
        {
            ventaConInteres = venta * 1.08;
        }
        else if (cantCuotas == 1)
        {
            ventaConInteres = venta;
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
        ventasTotal = ventasTotal + ventaConInteres;
        break;

    default:
        printf("Opcion invalida.");
        break;
    }

}

printf("El total de las ventas de hoy es de: %d\n", ventasTotal);

    system("pause");
    return 0;

}