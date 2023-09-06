#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*6- Leer una nota de un alumno por consola e informar la condición del mismo. (menor
que 4: Reprobado, menor que 6: Regular, mayor o igual que 6: Promocionado). Validar
que la nota ingresada se encuentre entre el 0 y el 10, de lo contrario informar “Nota
inválida”.*/

void main()
{
    float notaAlumno;

    printf("Ingrese la nota del alumno: ");
    scanf("%f", &notaAlumno);

    if (notaAlumno >= 0 && notaAlumno <= 10)
    {
        if (notaAlumno < 4)
        {
            printf("El alumno esta reprobado. ");
        }
        else if (notaAlumno < 6)
        {
            printf("El alumno ha regularizado. ");
        }
        else if (notaAlumno >= 6)
        {
            printf("El alumno ha promocionado. ");
        }
    }
    else
    {
        printf("La nota ingresada es invalida. ");
    }

    system("pause");
}