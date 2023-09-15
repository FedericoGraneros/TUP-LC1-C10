#include<stdlib.h>
#include<stdio.h>

/*Se desea leer las calificaciones de 5 alumnos, por cada alumno se leen 3 calificaciones.
Mostrar el promedio por alumno y el promedio general.*/

int main()
{
    int cantAlumnos = 5;
    int cantNotas = 3;
    float alumnoNota = 0;
    float sumaNota = 0;
    float promedioAlumno = 0;
    float promedioGeneral = 0;

    for (int i = 1; i <= cantAlumnos; i++)
    {
        promedioAlumno = 0;
        sumaNota = 0;

        printf("Ingrese las notas del alumno %d:\n", i);

        for (int j = 1; j <= cantNotas; j++)
        {
            printf("Nota %d: ", j);
            scanf("%f", &alumnoNota);
            sumaNota = sumaNota + alumnoNota;
        }

        promedioAlumno = sumaNota / 3;
        printf ("El promedio del alumno %d es: %0.2f\n", i, promedioAlumno);
        
        promedioGeneral = promedioGeneral + promedioAlumno;
    }

    promedioGeneral = promedioGeneral / cantAlumnos;
    printf("\n");
    printf("El promedio general es de: %0.2f\n", promedioGeneral);
    system("pause");
    return 0;
}