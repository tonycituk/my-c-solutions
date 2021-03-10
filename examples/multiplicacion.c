#include <stdio.h>

int main(){
	float longitud;
	float anchura;
	float superficie;
	
	printf("Ingrese la longitud: \n");
	scanf("%f", &longitud);
	
	printf("Ingrese la anchura: \n");
	scanf("%f", &anchura);
    
	
	superficie = longitud * anchura;
	
	printf("La superficie es %.4f\n", superficie);
	
	return 0;
}