#include <stdio.h>
#include <string.h>

int main()
{
    int a = 8;
    int * b = &a;
    printf("a vale %d y se encuentra en %d\n", a, b);
    printf("posicion directa: %d\n", &a);
    //*b = *b + 10;
    (*b)++; //tambien se puede usar ++*b
    printf("a vale %d y se encuentra en %d\n", *b, &a);
    printf("posicion directa: %d\n", &a);
    /* int all = 42;
    int &refall = all;
    refall = 30; */
    return 0;
}