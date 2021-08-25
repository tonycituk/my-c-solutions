#include <stdio.h>
#include <stdlib.h>
#include "asignatura.h"

/*
Authors:
    Antonio Cituk: https://github.com/Antonio-Cituk
    Teodoro Dawn: https://github.com/Teodoro-lab
*/

/*

//Dia
typedef struct Dia
{
    int diaSemana;
    Horario horario;
    struct Dia * siguienteDia;
}Dia;

//Asignatura
typedef struct Asignatura
{
    char *nombre;
    Dia dias;
    Asignatura *siguienteAsignatura;
} Asignatura;

//hora 24hrs
typedef struct Hora
{
    int horas;
    int minutos;
} Hora;

//Horario
typedef struct Horario
{
    Hora entrada;
    Hora salida;
} Horario;

*/

int main(void)
{
    //Integral
    //Lunes
    Hora * entradaIntegralLunes = newHora();
    entradaIntegralLunes->horas = 7;
    entradaIntegralLunes->minutos = 30;
    Hora * salidaIntegralLunes = newHora();
    salidaIntegralLunes->horas = 9;
    salidaIntegralLunes->minutos = 0;
    Horario * horarioIntegralLunes = newHorario();
    horarioIntegralLunes->entrada=entradaIntegralLunes;
    horarioIntegralLunes->salida=salidaIntegralLunes;
    Dia * lunesIntegral = newDia();
    lunesIntegral->diaSemana=0;
    lunesIntegral->horario=horarioIntegralLunes;

    //Martes
    Hora * entradaIntegralMartes = newHora();
    entradaIntegralMartes->horas = 7;
    entradaIntegralMartes->minutos = 30;
    Hora * salidaIntegralMartes = newHora();
    salidaIntegralMartes->horas = 9;
    salidaIntegralMartes->minutos = 0;
    Horario * horarioIntegralMartes = newHorario();
    horarioIntegralMartes->entrada=entradaIntegralMartes;
    horarioIntegralMartes->salida=salidaIntegralMartes;
    Dia * MartesIntegral = newDia();
    MartesIntegral->diaSemana=1;
    MartesIntegral->horario=horarioIntegralMartes;
    agregarDia(lunesIntegral, MartesIntegral);

    //Jueves
    Hora * entradaIntegralJueves = newHora();
    entradaIntegralJueves->horas = 7;
    entradaIntegralJueves->minutos = 30;
    Hora * salidaIntegralJueves = newHora();
    salidaIntegralJueves->horas = 9;
    salidaIntegralJueves->minutos = 0;
    Horario * horarioIntegralJueves = newHorario();
    horarioIntegralJueves->entrada=entradaIntegralJueves;
    horarioIntegralJueves->salida=salidaIntegralJueves;
    Dia * JuevesIntegral = newDia();
    JuevesIntegral->diaSemana=3;
    JuevesIntegral->horario=horarioIntegralJueves;
    agregarDia(lunesIntegral, JuevesIntegral);


    //POO
    //Martes
    Hora * entradaPOOMartes = newHora();
    entradaPOOMartes->horas = 10;
    entradaPOOMartes->minutos = 30;
    Hora * salidaPOOMartes = newHora();
    salidaPOOMartes->horas = 12;
    salidaPOOMartes->minutos = 0;
    Horario * horarioPOOMartes = newHorario();
    horarioPOOMartes->entrada=entradaPOOMartes;
    horarioPOOMartes->salida=salidaPOOMartes;
    Dia * MartesPOO = newDia();
    MartesPOO->diaSemana=1;
    MartesPOO->horario=horarioPOOMartes;

    //Miércoles
    Hora * entradaPOOMiércoles = newHora();
    entradaPOOMiércoles->horas = 11;
    entradaPOOMiércoles->minutos = 0;
    Hora * salidaPOOMiércoles = newHora();
    salidaPOOMiércoles->horas = 12;
    salidaPOOMiércoles->minutos = 30;
    Horario * horarioPOOMiércoles = newHorario();
    horarioPOOMiércoles->entrada=entradaPOOMiércoles;
    horarioPOOMiércoles->salida=salidaPOOMiércoles;
    Dia * MiércolesPOO = newDia();
    MiércolesPOO->diaSemana=2;
    MiércolesPOO->horario=horarioPOOMiércoles;
    agregarDia(MartesPOO, MiércolesPOO);

    //Viernes
    Hora * entradaPOOViernes = newHora();
    entradaPOOViernes->horas = 12;
    entradaPOOViernes->minutos = 0;
    Hora * salidaPOOViernes = newHora();
    salidaPOOViernes->horas = 13;
    salidaPOOViernes->minutos = 30;
    Horario * horarioPOOViernes = newHorario();
    horarioPOOViernes->entrada=entradaPOOViernes;
    horarioPOOViernes->salida=salidaPOOViernes;
    Dia * ViernesPOO = newDia();
    ViernesPOO->diaSemana=4;
    ViernesPOO->horario=horarioPOOViernes;
    agregarDia(MartesPOO, ViernesPOO);
    
    
    //imprimirDias(lunesIntegral);
    Asignatura * misAsignaturas = newAsignaturaNombre("Cálculo Integral");
    misAsignaturas->dias=lunesIntegral;
    //imprimirAsignatura(misAsignaturas);
    Asignatura * POO = newAsignaturaNombre("POO");
    POO->dias=MartesPOO;

    agregarAsignatura(misAsignaturas, POO);
    imprimirAsignaturas(misAsignaturas);
    printf("\n\n");

    imprimirAsignaturasDia(misAsignaturas, 0);
    return 0;
}