#include <stdio.h>
#include <stdbool.h>

/*

Calcula el resultado de la siguiente serie, utilizando un ciclo for.
Valida el valor de n empleando una estructura do-while.
    1/1 -1/2+ 1/3 -... ±1/n
Datos:
    n
Donde:
    n es una variable de tipo entero, que expresa el número de términos de la serie.

*/

int main()
{
    int n;
    float sumatoria = 0;
    bool esNegativo = false;

    do
    {
        printf("Ingresa el valor de n: ");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("Ingresa un valor mayor a 0 para n.\n");
        }
    } while (n <= 0);

    for (int i = 1; i <= n; i++)
    {
        //float signo = esNegativo ? -1 : 1;
        //printf("%s1/%0.0lf = %lf\n", esNegativo ? "-" : "", i, signo * (1 / i));
        sumatoria += (esNegativo ? -1 : 1) * (1 / (float)i);
        esNegativo = esNegativo ? false : true;
    }

    printf("El valor es %lf", sumatoria);
    return 0;
}