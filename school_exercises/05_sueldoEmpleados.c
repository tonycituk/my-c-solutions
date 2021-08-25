#include <stdio.h>

/*
Analiza el siguiente  códigofuentede  un  programay,agrega  las  instrucciones
necesarias que permitan el correcto funcionamiento del mismoen los puntos indicados.

int main()
{
    char nombreEmp[31];
    int horasTrab;
    float cuotaHora, sueldo;
    char opcion;
    do
    {
        printf("\nCALCULA EL SUELDO DE VARIOS EMPLEADOS\n");
        printf("---------------------------------------\n");
        printf("TECLEE EL NOMBRE: ");
        gets(nombreEmp);
        printf("TECLEE HORAS TRABAJADAS: ");
        scanf("%d", &horasTrab);
        printf("TECLEE CUOTA POR HORA: ");
        scanf("%f", &cuotaHora);
        //...
        sueldo = cuotaHora * horasTrab;
        printf("---------------------------------------\n");
        printf("EL EMPLEADO: %s\n", nombreEmp);
        printf("GANO: $%8.2f\n\n", sueldo);
        printf("---------------------------------------\n");
        printf("¿DESEA PROCESAR OTRO EMPLEADO (S/N)?: ");
        opcion = getchar(); /*Lee el carácter y lo almacena en opcion
        //...
    } while (opcion == 'S' || opcion == 's');
    printf("\nPRESIONE CUALQUIER TECLA PARA CONTINUAR...");
    return 0;
}
*/
int main()
{
    char nombreEmp[31];
    int horasTrab;
    float cuotaHora, sueldo;
    char opcion;
    do
    {
        printf("\nCALCULA EL SUELDO DE VARIOS EMPLEADOS\n");
        printf("---------------------------------------\n");
        printf("TECLEE EL NOMBRE: ");
        scanf("%s",nombreEmp);
        printf("TECLEE HORAS TRABAJADAS: ");
        scanf("%d", &horasTrab);
        printf("TECLEE CUOTA POR HORA: ");
        scanf("%f", &cuotaHora);
        sueldo = cuotaHora * horasTrab;
        printf("---------------------------------------\n");
        printf("EL EMPLEADO: %s\n", nombreEmp);
        printf("GANO: $%8.2f\n\n", sueldo);
        printf("---------------------------------------\n");
        printf("¿DESEA PROCESAR OTRO EMPLEADO (S/N)?: ");
        do
        {
            opcion = getchar();
        } while (opcion=='\n');
    } while (opcion == 'S' || opcion == 's');
    printf("\nPRESIONE CUALQUIER TECLA PARA CONTINUAR...\n");
    printf("---------------------------------------\n");
    return 0;
}