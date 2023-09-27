#include <stdio.h>
#include <stdlib.h>

/*. Realizar un programa que calcule el promedio de las notas de los parciales de un curso.
Comenzar pidiendo al usuario la cantidad de alumnos del curso y la cantidad de
parciales que se tomaron durante el cuatrimestre. Calcular el promedio de notas de los
alumnos del curso. A medida que se ingresan las notas, validar que las mismas sean
mayores que 0 (cero) y menores que 10, en caso contrario requerir el ingreso de dicha
nota hasta que sea correcta. Mostrar el promedio de cada alumno a medida que se va
calculando y por último, el promedio general del curso.*/

int main()
{
    int cantAlumnos;
    int cantParciales;
    float alumnoNota = 0;
    float sumaNota = 0;
    float promedioAlumno = 0;
    float promedioGeneral = 0;

    printf("Ingrese la cantidad de alumnos: ");
    scanf("%i", &cantAlumnos);

    printf("Ingrese la cantidad de parciales: ");
    scanf("%i", &cantParciales);

    for (int i = 1; i <= cantAlumnos; i++)
    {
        promedioAlumno = 0;
        sumaNota = 0;

        printf("Ingrese las notas del alumno %d:\n", i);

        for (int j = 1; j <= cantParciales; j++)
        {
            //Validacion usando do-while
            do
            {
                printf("Nota %d: ", j);
                scanf("%f", &alumnoNota);
                sumaNota = sumaNota + alumnoNota;
                if (alumnoNota <= 0 || alumnoNota > 10)
                {
                    printf("Nota invalida.\n");
                }
            } while (alumnoNota <= 0 || alumnoNota > 10);
        }

        promedioAlumno = sumaNota / cantParciales;
        printf("El promedio del alumno %d es: %0.2f\n", i, promedioAlumno);

        promedioGeneral = promedioGeneral + promedioAlumno;
    }

    promedioGeneral = promedioGeneral / cantAlumnos;
    printf("\n");
    printf("El promedio general es de: %0.2f\n", promedioGeneral);
    system("pause");
    return 0;
}