typedef struct Cuadrado
{
    int lado;
    int area;
    int perimetro;
    char *color;
} Cuadrado;

void llenarPerimetro(Cuadrado *cuadrado)
{
    cuadrado->perimetro = 4 * cuadrado->lado;
}

void llenarArea(Cuadrado *cuadrado)
{
    cuadrado->area = cuadrado->lado * cuadrado->lado;
}