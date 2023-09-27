#include <stdlib.h>
#include <stdio.h>

/* La compañía que gestiona la autopista ha decidido cambiar las tarifas de peaje. Estas tarifas
dependen de:
● Tipo de vehículo (camión, automóvil o moto) que desee utilizar la autopista
● Número de pasajeros que lleve
● Tipo horario del día:
Horario A: horas de “Alta” congestión:
● Los automóviles con tres pasajeros o más no pagan peaje
● Los camiones pagan $300
● Las motos pagan $100
Horario B: horas de “Baja” congestión:
● Los automóviles pagan $150
● Los camiones pagan $200
● Las motos no pagan peaje
En este horario la tarifa es independientemente del número de pasajeros.
Escriba un programa que leyendo el tipo de vehículo, tipo de horario de congestión alta o baja
y el número de pasajeros, calcule la tarifa que le debe cobrar a un vehículo. Validar que el tipo
de vehículo sea uno de los mencionados y que el número de pasajeros no sea mayor a 5. */

int main()
{
    int cantPasajeros, montoPagar;
    char vehiculo;
    int congestion;

    printf("Ingrese C si usted esta en un camion.\n");
    printf("Ingrese A si usted esta en un automovil.\n");    //pregunto que tipo de vehiculo
    printf("Ingrese M si usted esta en una moto. \n");
    printf("Letra a ingresar: ");
    scanf("%c", &vehiculo);

    printf("Ingrese '1' si hay mucha congestion o '2' si hay poca:  ");  // si hay o no congestion
    scanf("%d", &congestion);

    switch (vehiculo)
    {
    case 'A':

        if (congestion == 2)
        {
            montoPagar = 150;
            printf("Monto a pagar: %d\n", montoPagar);   // si hay poca congestion pegara 150 asi que lo pongo de una y le tiro return 0 para que frene ahi
            system("pause");
            return 0;
        }
        else if (congestion == 1)
        {
            printf("Ingrese la cantidad de pasajeros: ");   //solo pregunto en el caso del auto ya que es el unico que me interesa
            scanf("%d", &cantPasajeros);
        }
        if (congestion == 1 && cantPasajeros >= 3)   // si tiene mucha congestion y mas de 3 pasajeros no pagan nada asi quelo valido
        {
            montoPagar = 0;
        }
        else if (congestion == 1 && cantPasajeros < 3) // si tiene mucha congestion pero no tiene 3 o mas pasajeros le cobro 150
        {
            montoPagar = 150;
        }
        else if (congestion == 1 && cantPasajeros > 5) // si tiene mas de 5 pasajeros no lo dejo pasar.
        {
            printf("Numero de pasajeros invalido. ");
            return 1;
        }
        break;
    case 'C':
        if (congestion == 1)
        {
            montoPagar = 300;
        }
        else if (congestion == 0)
        {
            montoPagar = 200;
        }
        break;
    case 'M':
        if (congestion == 0)
        {
            montoPagar = 100;
        }

    default:
        printf("Tipo de vehiculo no valido. \n");   // default si ninguuna opcion ingresada es correcta
        return 1;
    }

    printf("El monto a pagar es de: $%d\n", montoPagar); // le digo el monto final aca en caso de ser camion o moto

    system("pause");
    return 0;
}