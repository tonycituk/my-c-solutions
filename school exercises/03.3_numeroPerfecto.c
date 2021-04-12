#include <stdio.h>
#include <stdbool.h>

//Un número perfecto es un entero positivo, que es igual a la suma de todos los enteros positivos (excluidos el mismo) queson divisores del número. El primer número perfecto es 6, ya que los divisores de 6son: 1,2,3. Por lo tanto,1 + 2 + 3 = 6

int main()
{
    bool esPerfecto = true;
    int num, sumatoria = 0;

    do
    {
        printf("Ingresa el número para evaluar si es perfecto: ");
        scanf("%d", &num);
        if (num <= 0)
        {
            printf("Ingresa un valor mayor a 0.\n");
        }
    } while (num <= 0);

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sumatoria += i;
        }
    }
    if (sumatoria != num)
    {
        esPerfecto = false;
    }

    printf("%d %s es un número perfecto.", num, esPerfecto ? "sí" : "no");
    return 0;
}