#include <stdio.h>

int sumaDivisores(int n);

int main()
{
    int n;
    do
    {
        printf("Ingresa el valor de n: ");
        scanf("%d", &n);
        if (n < 1)
        {
            printf("Ingresa un valor mayor a 0.\n");
        }

    } while (n < 1);
    printf("La suma de los divisores de %d es %d.", n, sumaDivisores(n));
    return 0;
}

int sumaDivisores(int n)
{
    int sumatoria = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sumatoria += i;
        }
    }
    return sumatoria;
}