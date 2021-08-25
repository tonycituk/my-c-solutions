#include <stdlib.h>
//hora 24hrs
typedef struct Hora
{
    int horas;
    int minutos;
} Hora;

Hora *newHora(void) { return (Hora *)malloc(sizeof(Hora)); }