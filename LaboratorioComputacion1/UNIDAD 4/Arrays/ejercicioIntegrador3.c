#include <stdio.h>
#include <stdlib.h>
void main()
{
    int dnis[10] = {0};
    float notas[10] = {0};
    int dniABuscar;
    int opcion;
    int tam = 10;
    do
    {
        printf("\nElija una opci%cn\n", 162);
        printf("1. Cargar alumnos\n");
        printf("2. Buscar un alumno\n");
        printf("3. Modificar una nota\n");
        printf("4. Mostrar alumnos\n");
        printf("5. Salir.\n\n");
        scanf("%d", &opcion);
        int dniExiste = 0;
        if (opcion != 5)
        {
            switch (opcion)
            {
            case 1:
                for (int i = 0; i < tam; i++)
                {
                    printf("Ingrese el DNI del alumno #%d: ", i+1);
                    scanf("%i", &dnis[i]);
                    while ( dnis[i] < 1000000 || dnis[i] > 99999999 )
                    {
                        printf("DNI incorrecto. Ingrese un dni valido: ");
                        scanf("%i", &dnis[i]);
                    }
                    printf("Ingrese la nota del alumno #%d: ", i+1);
                    scanf("%f", &notas[i]);
                    while ( notas[i] <= 0 || notas[i] > 10 )
                    {
                        printf("Nota incorrecta. Ingrese una nota valida: ");
                        scanf("%f", &notas[i]);
                    }
                }
                break;
case 2:
                printf("Ingrese el dni del alumno a buscar\n");
                scanf("%i", &dniABuscar);
                for (int i = 0; i < tam; i++)
                {
                    if(dniABuscar == dnis[i])
                    {
                        printf("La nota del alumno con dni %i es %.2f", dnis[i], notas[i]);
                        dniExiste = 1;
                    }
                }
                if ( dniExiste == 0)
                {
                    printf("DNI inexistente\n");
                }
                break;
            case 3:
                printf("Ingrese el dni del alumno a modificar\n");
                scanf("%i", &dniABuscar);
                for (int i = 0; i < tam; i++)
                {
                    if(dniABuscar == dnis[i])
                    {
                        dniExiste = 1;
                        printf("Ingrese la nota: ");
                        scanf("%f", &notas[i]);
                        while ( notas[i] <= 0  || notas[i] > 10 )
                        {
                            printf("nota incorrecta. Ingrese una nota valida: ");
                            scanf("%f", &notas[i]);
                        }
                    }
                }
                if ( dniExiste == 0)
                {
                    printf("DNI inexistente\n");
                }
                break;
            case 4:
                printf("Dni alumno - Nota\n");
                for (int i = 0;  i < tam; i++)
                {
                    printf("%i - %.2f\n", dnis[i], notas[i]);
                }
                break;
            default:
                printf("opci%dn inválida", 162);
                break;
            }
        }
    } while (opcion != 5);

    system("pause");
    return 0;
}