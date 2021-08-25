#include <stdio.h>
//Implementa un programa que solicite al usuario la longitud y anchura de una habitación y a continuación visualice su superficie con cuatro decimales.

int main(){
    //Declaración de variables
    float longitud, anchura, superficie;
    //Solicitud de datos
    printf("Ingresa la longitud de la habitación: ");
    scanf("%f", &longitud);
    printf("Ingresa la anchura de la habitación: ");
    scanf("%f", &anchura);
    //Cálculos
    superficie = longitud * anchura;
    //Respuesta
    printf("La superficie de la habitación es %0.4f.", superficie);
    return 0;
}