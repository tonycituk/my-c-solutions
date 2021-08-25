//Escritura en un archivo de acceso aleatorio

#include <stdio.h>

//definicion de la estructura datosCliente
struct datosCliente{
	int numCta;            //numero de cuenta
	char apellido[15];     //apellido del cliente
	char nombre[10];        //nombre del cliente
	double saldo;          //saldo de la cuenta
};

int main(){
	
	FILE *ptrCf;   //apuntador al archivo de credito.dat
	
	//inicializa cliente con informacion predeterminada
	struct datosCliente cliente = {0, "", "", 0.0};
	
	//fopen abre el archivo;si no lo puede abrir, termina el programa
	if((ptrCf = fopen("credito.dat", "rb+")) == NULL){
		printf("El archivo no pudo abrirse.\n");
	} else{
		//Se reuiere que el usuario especifique el numero de cuenta
		printf("Introduzca el numero de cuenta (entre 1 y 100).\n");
		printf("o presione 0 para terminar la captura)\n? ");
		scanf ("%d", &cliente.numCta);
		
		//el usuario introduce la informaci�n la cual se copia dentro del archivo
		while (cliente.numCta != 0){
			//el usuario introduce el apellido, el nombre y el saldo
			printf("Introduzca el apellido\n? ");
			scanf("%s", cliente.apellido); 
			printf("Introduzca el nombre\n? ");
			scanf("%s", cliente.nombre);
			printf("Introduzca el saldo\n? ");
			scanf("%lf", &cliente.saldo);
			
			//localiza la posicion de un registro especifico en el archivo
			fseek(ptrCf, (cliente.numCta-1)*sizeof(struct datosCliente), SEEK_SET);
			
			//Escribe en el archivo la informaci�n especificada por el usuario 
			fwrite(&cliente, sizeof(struct datosCliente), 1, ptrCf);
			
        	printf("Introduce el numero de cuenta.\n?");
	    	scanf ("%d", &cliente.numCta);
		}
		
		fclose(ptrCf); //fclose cierra el archivo
	}
	
	return 0;
	
}