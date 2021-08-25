#include <stdlib.h>
#include "horario.h"
#include <stdio.h>
//Dia
typedef struct Dia
{
    int diaSemana;
    Horario *horario;
    struct Dia *siguienteDia;
} Dia;

Dia *newDia(void) { return (Dia *)malloc(sizeof(Dia)); }
void agregarDia(Dia *primerDia, Dia *nuevoDia)
{
    Dia *auxDia = primerDia;
    while (auxDia->siguienteDia != NULL)
    {
        auxDia = auxDia->siguienteDia;
    }
    auxDia->siguienteDia = nuevoDia;
}

void diaSemana(int dia)
{
    char diasDeLaSemana[7][10] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sábado", "Domingo"};
    printf("%s", diasDeLaSemana[dia]);
}

void imprimirDia(Dia *dia)
{
    char diasDeLaSemana[7][10] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sábado", "Domingo"};
    printf("%s: Entrada: %d:%d, Salida: %d:%d\n", diasDeLaSemana[dia->diaSemana], dia->horario->entrada->horas, dia->horario->entrada->minutos, dia->horario->salida->horas, dia->horario->salida->minutos);
}

void imprimirListaDias(Dia *primerDia)
{
    Dia *auxDia = primerDia;
    imprimirDia(primerDia);
    while (auxDia->siguienteDia != NULL)
    {
        auxDia = auxDia->siguienteDia;
        imprimirDia(auxDia);
    }
}
