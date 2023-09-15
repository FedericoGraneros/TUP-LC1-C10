#include<stdlib.h>
#include<stdio.h>
#include<math.h>

/*Actualizar el saldo de una cuenta bancaria, a partir de un retiro. Verificar que el saldo
sea mayor o igual que el importe a retirar.*/

void main()
{
    float saldoCuenta, saldoRetirar;

    saldoCuenta = 100000;

    printf("Ingrese el monto que desea retirar: ");
    scanf("%f", &saldoRetirar);

    if (saldoCuenta >= saldoRetirar)
    {
        saldoCuenta = saldoCuenta - saldoRetirar;
        printf("Usted ha retirado: %.2f\n", saldoRetirar);
        printf("El nuevo saldo de su cuenta es: %.2f\n", saldoCuenta);
    }
    else
    {
        printf("El saldo de su cuenta es insuficiente. ");
    }

    system("pause");    
}