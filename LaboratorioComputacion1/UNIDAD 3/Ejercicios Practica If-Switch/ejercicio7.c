#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*Ingresar el valor de una venta y aplicar el 15% de descuento si el valor es >= 100000 y
un 10% si es menor. Validar que la venta sea mayor que 0, caso contrario informar
dicha situación.*/

void main()
{
    float ventaRealizada, ventaTotal, descuentoVenta;

    printf("Ingrese el monto de la venta realizada: ");
    scanf("%f", &ventaRealizada);

    if (ventaRealizada > 0)
    {
        if (ventaRealizada >= 100000)
        {
            descuentoVenta = ventaRealizada * 0.15;
            ventaTotal = ventaRealizada - descuentoVenta;
            printf("Su monto a pagar con un 15 de descuento es: %0.2f\n", ventaTotal);
        }
        else if (ventaRealizada < 100000)
        {
            descuentoVenta = ventaRealizada * 0.10;
            ventaTotal = ventaRealizada - descuentoVenta;
            printf("Su monto a pagar con un 10 de descuento es: %0.2f\n", ventaTotal);
        }
    }
    else
    {
        printf("La venta debe ser mayor a 0. \n");
    }

    system("pause");
}