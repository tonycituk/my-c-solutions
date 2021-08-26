#include <stdio.h>
#include <stdlib.h>
#include "includes/cuadrado.h"

int main(void)
{
    //struct Cuadrado *roberto = (struct Cuadrado *)malloc(sizeof(struct Cuadrado));
    Cuadrado *roberto = (Cuadrado *)malloc(sizeof(Cuadrado));
    roberto->lado = 5;
    llenarArea(roberto);
    llenarPerimetro(roberto);
    printf("Area: %d\n", roberto->area);
    printf("Perimetro de roberto: %d", roberto->perimetro);
    return 0;
}