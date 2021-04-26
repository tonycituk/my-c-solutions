#include <stdio.h>
#include <stdlib.h>

//Variables globales
#define SALIR 5
#define TRIANGULO 1
#define CUADRADO 2
#define RECTANGULO 3
#define CIRCULO 4

//prototipos
int menu();
float calcularArea(int tipoFigura);
void imprimirArea(float area);
float triangulo(float base, float altura);
float cuadrado(float lado);
float rectangulo(float largo, float ancho);
float circulo(float radio);
void limpiarPantalla();

//Funcion MAIN se ejecuta al iniciar el programa
int main()
{
   int opcion;
   float superficie;

   do
   {
      opcion = menu();
      if (opcion != SALIR)
      {
         superficie = calcularArea(opcion);
         imprimirArea(superficie);
      }
      printf("\nPresione <ENTER> PARA CONTINUAR...");
      fflush(stdin);
      getchar();
   } while (opcion != SALIR);

   return 0;
}

int menu()
{
   int opcion;
   do
   {
      limpiarPantalla();
      printf("-------------------------------\n");
      printf("|  AREAS FIGURAS GEOMETRICAS  |\n");
      printf("|-----------------------------|\n");
      printf("|        1. TRIANGULO         |\n");
      printf("|        2. CUADRADO          |\n");
      printf("|        3. RECTANGULO        |\n");
      printf("|        4. CIRCULO           |\n");
      printf("|        5. SALIR             |\n");
      printf("|-----------------------------|\n");
      printf("|TECLEE OPCION:   ");
      scanf("%d", &opcion);
   } while (opcion < 1 || opcion > 5);

   return opcion;
}

float calcularArea(int tipoFigura)
{
   float area;
   float base, altura;
   float lado;
   float largo, ancho;
   float radio;

   switch (tipoFigura)
   {
   case TRIANGULO:
      printf("CALCULA E IMPRIME EL AREA DE UN TRIANGULO\n");
      printf("PROPORCIONE LA BASE DEL TRIANGULO: ");
      scanf("%f", &base);
      printf("PROPORCIONE LA ALTURA DEL TRIANGULO: ");
      scanf("%f", &altura);
      area = triangulo(base, altura);
      return area;
   case CUADRADO:
      printf("CALCULA E IMPRIME EL AREA DE UN CUADRADO\n");
      printf("PROPORCIONE EL LADO DEL CUADRADO: ");
      scanf("%f", &lado);
      area = cuadrado(lado);
      return area;
   case RECTANGULO:
      printf("CALCULA E IMPRIME EL AREA DE UN RECTANGULO\n");
      printf("PROPORCIONE EL LARGO DEL RECTANGULO: ");
      scanf("%f", &largo);
      printf("PROPORCIONE LA ALTURA DEL TRIANGULO: ");
      scanf("%f", &ancho);
      area = rectangulo(largo, ancho);
      return area;
   case CIRCULO:
      printf("CALCULA E IMPRIME EL AREA DE UN CIRCULO\n");
      printf("PROPORCIONE EL RADIO DEL CIRCULO: ");
      scanf("%f", &radio);
      area = circulo(radio);
      return area;
   default:
      printf("EL RANGO PERMITIDO ES 1 - 5;");
      return 0.0;
   }
}
void imprimirArea(float area)
{
   printf("EL AREA ES:  %f", area);
}
float triangulo(float base, float altura)
{
   return base * altura / 2;
}
float cuadrado(float lado)
{
   return lado * lado;
}
float rectangulo(float largo, float ancho)
{
   return largo * ancho;
}
float circulo(float radio)
{
   return 3.14159 * radio * radio;
}
void limpiarPantalla()
{
   system("cls");
}