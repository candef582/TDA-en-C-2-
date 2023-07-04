#ifndef OBRAS_H_INCLUDED
#define OBRAS_H_INCLUDED

struct ObraS;
typedef struct ObraS * ObrasP;

ObrasP cargarObras (char nombr[50], char au[50], int p);

ObrasP crearObrasVacias ();

void mostrarObras (ObrasP o);



#endif // OBRAS_H_INCLUDED
