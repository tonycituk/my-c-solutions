#include <stdio.h>
#include <stdlib.h>

//Un programa para guadar los puntajes de 100 jugadores en un archivo

int main(void){
    
    FILE *ptrPf;
    int * puntaje = (int *) malloc(sizeof(int));
    int jugador;
    //int* misPuntosptr = (int *) malloc(3 * sizeof(int));
    //int* misPuntosPasadosptr = (int *) malloc(3 * sizeof(int));

    /* for (int i = 0; i < 3; i++)
    {
        scanf("%d", (misPuntosptr + i));
    }
 */
    /* for (int i = 0; i < 3; i++)
    {
        printf("%d\n", *(misPuntosptr + i));
    } */
    
    ptrPf = fopen("puntajes.dat", "rb+");
    if (ptrPf == NULL)
    {
        printf("No se pudo abrir el archivo");
    }
    else{

        printf("Ingresa el no del jugador: ");
        scanf("%d", &jugador);
        printf("Ingresa el puntaje del jugador %d: " , jugador);
        scanf("%d", puntaje);

        fseek(ptrPf, ((jugador - 1)*(sizeof(int))), SEEK_SET);
        fwrite(puntaje, sizeof(int), 1, ptrPf);
        //fwrite(misPuntosptr, sizeof(int), 3, ptrPf);
        //fread(misPuntosPasadosptr, sizeof(int), 3, ptrPf);
        fclose(ptrPf);
    }

    /* for (int i = 0; i < 3; i++)
    {
        printf("%d\n", *(misPuntosPasadosptr + i));
    } */
    //printf("%p", ptrPf);
    return 0;
}