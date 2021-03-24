#include <stdio.h>

//We can define a structure like this
struct Point
{
    int x, y;
};

int main()
{
    struct Point p1 = {0, 1};

    // Accessing members of point p1
    p1.x = 20;
    printf("x = %d, y = %d\n", p1.x, p1.y);

    //designated initialization
    struct Point p2 = {.x = 43};
    printf("x = %d\n", p2.x);

    // Create an array of structures
    struct Point arr[10];

    // Access array members
    arr[0].x = 10;
    arr[0].y = 20;

    printf("%d %d\n", arr[0].x, arr[0].y);

    //Using pointers

    struct Point *ptrToP1 = &p1;

    ptrToP1->x = 3;
    printf("x = %d, y = %d\n", ptrToP1->x, ptrToP1->y);

    //some tests i made GG
    int sum = ptrToP1->x + ptrToP1->y;
    printf("sum = %d\n", sum);
    sum = 0;
    sum = p1.x + p1.y;
    printf("sum = %d", sum);
    return 0;
}