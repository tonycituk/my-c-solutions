#include <stdio.h>
//Calcular la sumatoria de i=1 hasta 10 de i^2

int main()
{
    double i = 1, sumatoria = 0;
    
    while (i <= 10)
    {
        sumatoria+=i*i;
        //printf("%0.0lf^2 = %0.0lf\n", i, i*i);
        i++;
    }

    printf("la sumatoria de i=1 hasta 10 de i^2 es %0.0lf", sumatoria);

    return 0;
}