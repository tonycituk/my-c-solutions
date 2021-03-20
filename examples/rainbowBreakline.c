#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMBER_OF_STRING 7
#define MAX_STRING_SIZE 10

void bl();

int main()
{
    srand(time(NULL));

    for (int i = 0; i < 30; i++)
    {
        printf("%d", i);
        bl();
    }
    
    return 0;
}

void bl()
{
    char arr[NUMBER_OF_STRING][MAX_STRING_SIZE] =
        {
            "\x1b[31m",
            "\x1b[32m",
            "\x1b[33m",
            "\x1b[34m",
            "\x1b[35m",
            "\x1b[36m",
            "\x1b[0m"
        };
    int r = rand() % 7;
    printf("%s \n", arr[r]);
}