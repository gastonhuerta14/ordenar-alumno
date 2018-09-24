#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "ordenarAlumnos.h"
#define T 2

void cargarAlumnos(int legajos[], char nombres[][21], int notas[], float alturas[], int tam)
{
    int i;
    char reingresar;

    for(i=0; i<tam; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajos[i]);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(nombres[i]);
        printf("Ingrese nota: ");
        scanf("%d", &notas[i]);
        printf("Ingrese altura: \n");
        scanf("%f", &alturas[i]);
    }
}
void mostrarAlumnos(int legajos[], char nombres[][21], int notas[], float alturas[], int tam)
{
    int i;
    int mayor;

    printf("%4s %20s %2s %5s\n","Legajo","Nombre","Nota","Altura");
    mayor=notas[0];
    for(i=0;i<tam;i++)
        {
            printf("%20s %5f", nombres[i], notas[i]);
            if(notas>6)
                {
                    printf("\nnombre del alumno aprobado: ", &nombres[i]);
                }
            if(nombres=='juan')
                {
                    printf("\nnombre completo de los alumnos que se llaman Juan: ", &nombres[i]);
                }
            if(nombres[T][1]=='p')
                {
                    printf("\nnombre del alumno que empieza con 'P': ", nombres[i]);
                }
            if(notas[i]>mayor)
                {
                    mayor=notas[i];
                }
        }
}
