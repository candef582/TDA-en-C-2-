#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "director.h"

struct DirectorS
{
    char nombreD[30];
    char apellido[30];
    int dni;
};

DirectorP cargarDirector (char nom[30], char ap[30], int dn)
{
    DirectorP d = malloc(sizeof(struct DirectorS));

    strcpy(d-> nombreD, nom);
    strcpy(d-> apellido, ap);
    d->dni=dn;

    return d;
};

void mostrarDirector (DirectorP d)
{
    printf ("\n---------DIRECTOR----------\n");

    printf ("\nEL NOMBRE DEL DIRECTOR ES: %s Y SU APELLIDO: %s\n", d->nombreD, d->apellido);
    printf ("\nEL DNI DEL DIRECTOR ES: %d\n", d->dni);

}
