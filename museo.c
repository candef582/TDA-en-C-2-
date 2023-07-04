#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "museo.h"
#include "obras.h"
#define TAM 10

struct MuseoS
{
    char nombreM[20];
    char direccion[30];

    ObrasP obras[TAM];
};

MuseoP cargarMuseo(char n[20], char d[30])
{
    MuseoP m = malloc(sizeof(struct MuseoS));

    strcpy (m->nombreM, n);
    strcpy (m->direccion, d);

    for (int i=0; i<TAM; i++)
    {
        m->obras[i] = crearObrasVacias();
    }

    return m;
};

//------------------------


void mostrarMuseo (MuseoP m)
{
    printf ("\n--------MUSEO------\n");

    printf("\nNOMBRE DEL MUSEO: %s \n", m->nombreM);
    printf("\nDIRECCION DEL MUSEO: %s \n", m->direccion);

     printf ("\n-----------OBRAS DE ARTE-----------\n");

       for (int i=0; i<TAM; i++)
    {
        mostrarObras(m->obras[i]);
    }
}



