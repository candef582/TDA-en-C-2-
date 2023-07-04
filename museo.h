#ifndef MUSEO_H_INCLUDED
#define MUSEO_H_INCLUDED

struct MuseoS;
typedef struct MuseoS * MuseoP;

MuseoP cargarMuseo(char n[20], char d[30]);

void mostrarMuseo (MuseoP m);

void agregarObras (MuseoP m);
void agregarObras (MuseoP m);

#endif // MUSEO_H_INCLUDED
