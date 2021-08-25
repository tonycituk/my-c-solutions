#include <stdio.h>

int main()
{
    int filas;
    int columnas;
    printf("Ingresa filas :");
    scanf("%d", &filas);
    printf("Ingresa columnas :");
    scanf("%d", &columnas);

    int bidimensional[filas][columnas];

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("Ingresa el valor de la caja [%d][%d]: ", i, j);
            scanf("%d", &bidimensional[i][j]);
        }
    }

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("[%d]", bidimensional[i][j]);
        }
        printf("\n");
    }

    return 0;
}