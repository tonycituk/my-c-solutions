#include <stdio.h>
#include <stdbool.h>

bool esPerfecto(int num);

int main()
{
    int num;
    do
    {
        printf("Ingresa el valor del número a evaluar: ");
        scanf("%d", &num);
        if (num < 1)
        {
            printf("Ingresa un valor mayor a 0.\n");
        }

    } while (num < 1);
    printf("%d %s es un número perfecto.", num, esPerfecto(num) ? "sí" : "no");
    return 0;
}

bool esPerfecto(int num)
{
    bool perfecto = false;
    int sumatoria = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sumatoria += i;
        }
        if (sumatoria > num)
        {
            break;
        }
    }
    if (sumatoria == num)
    {
        perfecto = true;
    }

    return perfecto;
}