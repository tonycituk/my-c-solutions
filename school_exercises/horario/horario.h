#include <stdlib.h>
#include "hora.h"
//Horario
typedef struct Horario
{
    Hora *entrada;
    Hora *salida;
} Horario;

Horario *newHorario(void) { return (Horario *)malloc(sizeof(Horario)); }

void imprimirHorario(Horario *horario)
{
    printf("Entrada: %d:%d, Salida: %d:%d\n", horario->entrada->horas, horario->entrada->minutos, horario->salida->horas, horario->salida->minutos);
}