#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_CARACTERES 25

bool validar(char *ptrFrase);
int convertir(char *ptrFrase);
void imprimir(char *ptrFrase);

int main(void){
    char frase[MAX_CARACTERES] = "";
    printf("Ingrese su frase: ");
    gets(frase);
    printf("%s", frase);
    int total = convertir(frase);
    printf("%s   %d", frase, total);

    return 0;
}


int convertir(char *ptrFrase){
    int totalVocales = 0;
    for (int i = 0; i < MAX_CARACTERES; i++)
    {
        char letra = ptrFrase[i];
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
            ptrFrase[i] = toupper(ptrFrase[i]);
        }
        if (ptrFrase[i] == 'A' || ptrFrase[i] == 'E' || ptrFrase[i] == 'I' || ptrFrase[i] == 'O' || ptrFrase[i] == 'U'){
            totalVocales = totalVocales + 1;
        }
    }
    return totalVocales;
}