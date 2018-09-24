#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "ordenarAlumnos.h"
#define T 2

void cargarAlumnos(int[], char[][21], int[], float[], int);
void mostrarAlumnos(int[], char[][21], int[], float[], int);

int main()
{
    int legajos[T];
    char nombres[T][21];
    int notas[T];
    float alturas[T];
    int i;

    cargarAlumnos(legajos, nombres, notas, alturas, T);
    mostrarAlumnos(legajos, nombres, notas, alturas, T);
}
