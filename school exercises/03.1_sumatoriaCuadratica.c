#include <stdio.h>
#include <math.h>
//Calcular la sumatoria de i=1 hasta 10 de i^2

int main()
{
    double i = 1.0, sumatoria = 0;
    while (i <= 10)
    {
        sumatoria+=pow(i,2);
        //printf("%0.0lf^2 = %0.0lf\n", i, pow(i, 2.0));
        i++;
    }

    printf("la sumatoria de i=1 hasta 10 de i^2 es %0.0lf", sumatoria);

    return 0;
}