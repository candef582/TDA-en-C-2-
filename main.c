#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "museo.h"
#include "director.h"
#include "obras.h"

int main()
{
    MuseoP m1 = cargarMuseo ("Historico Nacional", "Defensa 1600");
    mostrarMuseo(m1);

    //-----

    DirectorP d1 = cargarDirector ("Gabriel", "Di Meglio", 11222333);
    mostrarDirector(d1);

    //-----

    ObrasP o1 = cargarObras("Noche estrellada", "Van Gogh", 23000000);
    mostrarObras(o1);

    ObrasP o2 = cargarObras("El Beso", "Gustav Klimt", 17000000);
    mostrarObras(o2);

    ObrasP o3 = cargarObras("El Grito", "Edvard Munch", 11000000);
    mostrarObras(o3);

    return 0;
}
