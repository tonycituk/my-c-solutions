#include <stdio.h>

int main()
{
    int n;
    float sumatoria = 0;
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
        printf("1/%d = %lf \n", i, 1.0 /(float) i);
        sumatoria += 1.0 /(float) i;
    }
    printf("%lf", sumatoria);

    return 0;
}