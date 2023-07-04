#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "obras.h"


struct ObraS
{
    char nombreO[50];
    char autor[50];
    int precio;

    int obras;
};

ObrasP cargarObras (char nombr[50], char au[50], int p)
{
    ObrasP o = malloc(sizeof(struct ObraS));

    strcpy(o-> nombreO, nombr);
    strcpy(o-> autor, au);
    o-> precio = p;

    return o;
};

ObrasP crearObrasVacias()
{
    ObrasP o = malloc(sizeof(struct ObraS));

    o->obras = -1;
    strcpy(o->nombreO, "VACIO");

    return o;

}

void mostrarObras (ObrasP o)
{

    if (o-> obras != -1)
    {
        printf ("\nNOMBRE: %s AUTOR: %s PRECIO: %d\n", o->nombreO, o->autor, o->precio);
    }
}
