#include <stdlib.h>
#include "dia.h"
//Asignatura
typedef struct Asignatura
{
    char * nombre;
    Dia *dias;
    struct Asignatura *siguienteAsignatura;
} Asignatura;

//Asignatura vacía
Asignatura *newAsignatura(void) { return (Asignatura *)malloc(sizeof(Asignatura)); }
//Asignatura con nombre
Asignatura *newAsignaturaNombre(char *nombre)
{
    Asignatura *asignatura = newAsignatura();
    asignatura->nombre = nombre;
    return asignatura;
}

Asignatura *newAsignaturaDatos(char *nombre, Dia * dias)
{
    Asignatura *asignatura = newAsignatura();
    asignatura->nombre = nombre;
    asignatura->dias = dias;
    return asignatura;
}

void agregarAsignatura(Asignatura *primerAsignatura, Asignatura *nuevaAsignatura)
{
    Asignatura *auxAsignatura = primerAsignatura;
    while (auxAsignatura->siguienteAsignatura != NULL)
    {
        auxAsignatura = auxAsignatura->siguienteAsignatura;
    }
    auxAsignatura->siguienteAsignatura = nuevaAsignatura;
}

void imprimirAsignatura(Asignatura *asignatura)
{
    printf("\n\n%s\n", asignatura->nombre);
    imprimirListaDias(asignatura->dias);
}

void imprimirAsignaturas(Asignatura *primerAsignatura)
{
    Asignatura *auxAsignatura = primerAsignatura;
    imprimirAsignatura(primerAsignatura);
    while (auxAsignatura->siguienteAsignatura != NULL)
    {
        auxAsignatura = auxAsignatura->siguienteAsignatura;
        imprimirAsignatura(auxAsignatura);
    }
}

void imprimirAsignaturaDia(Asignatura *asignatura, int dia)
{
    Dia * currentDia = asignatura->dias;
    if (currentDia->diaSemana == dia)
    {
        printf("%s ", asignatura->nombre);
        imprimirHorario(currentDia->horario);
    }
    while (currentDia->siguienteDia != NULL)
    {
        currentDia = currentDia->siguienteDia;
        if (currentDia->diaSemana == dia)
        {
            printf("%s ", asignatura->nombre);
            imprimirHorario(currentDia->horario);
        }
    }
}

void imprimirAsignaturasDia(Asignatura *primerAsignatura, int dia)
{
    diaSemana(dia);
    printf("\n");
    Asignatura *auxAsignatura = primerAsignatura;
    imprimirAsignaturaDia(auxAsignatura, dia);
    while (auxAsignatura->siguienteAsignatura != NULL)
    {
        auxAsignatura = auxAsignatura->siguienteAsignatura;
        imprimirAsignaturaDia(auxAsignatura, dia);
    }
}

void agregarAsignaturaDatos(Asignatura *primerAsignatura, char*nombre, Dia * dias)
{
    Asignatura *auxAsignatura = newAsignatura();
    auxAsignatura->nombre = nombre;
    auxAsignatura->dias = dias;
    while (primerAsignatura->siguienteAsignatura != NULL)
    {
        primerAsignatura = primerAsignatura->siguienteAsignatura;
    }
    primerAsignatura->siguienteAsignatura = auxAsignatura;
}