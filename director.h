#ifndef DIRECTOR_H_INCLUDED
#define DIRECTOR_H_INCLUDED

struct DirectorS;
typedef struct DirectorS * DirectorP;

DirectorP cargarDirector (char nom[30], char ap[30], int dn);

void mostrarDirector(DirectorP d);

#endif // DIRECTOR_H_INCLUDED
