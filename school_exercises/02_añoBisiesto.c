#include <stdio.h>
#include <stdbool.h>

//Un año es bisiesto si es múltiplo de 4 (por ejemplo, 1984). Sin embargo, los años múltiplos de 100 sólo son bisiestos cuando a la vez son múltiplos de 400 (por ejemplo, 1800 no es bisiesto, mientras que 2000 sí lo es).

int main()
{
    bool esBisiesto = false;
    int año;
    printf("Ingresa el año para evaluar si es bisiesto: ");
    scanf("%d", &año);
    if (año % 4 == 0)
    {
        esBisiesto = true;
        if (año % 100 == 0)
        {
            esBisiesto = false;
            if (año % 400 == 0)
            {
                esBisiesto = true;
            }
        }
    }

    printf("%d %s es un año bisiesto.", año, esBisiesto ? "sí" : "no");
    return 0;
}