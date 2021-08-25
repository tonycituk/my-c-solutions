#include <stdio.h>

int main()
{

    int dimension = 0;
    printf("Ingresa la dimensión del arreglo: ");
    scanf("%d", &dimension);
    int arreglo[dimension];
    for (int i = 0; i < dimension; i++)
    {
        printf("Ingresa un valor: ");
        scanf("%d", &arreglo[i]);
    }
    for (int i = 0; i < dimension; i++)
    {
        printf("%3d", arreglo[i]);
    }
    int mayor = arreglo[0];
    int posicionMayor = 0;
    int menor = arreglo[0];
    int posicionMenor = 0;
    for (int i = 1; i < dimension; i++)
    {
        if(arreglo[i]>mayor){
            mayor = arreglo[i];
            posicionMayor = i;
        }
        if(arreglo[i]<menor){
            menor = arreglo[i];
            posicionMenor = i;
        }
    }

    printf("\nEl mayor es: %d en la posición: %d", mayor , posicionMayor);
    printf("\nEl menor es: %d en la posición: %d", menor , posicionMenor);


    return 0;
}