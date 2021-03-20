#include <stdbool.h>
#include <stdio.h>

void bl();

int main()
{
    int arraySize;

    printf("Enter size of array: ");
    scanf("%d", &arraySize);

    int myArray[arraySize];
    int *ptr = myArray;

    for (int i = 0; i < arraySize; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }

    bl();
    for (int i = 0; i < arraySize; i++)
    {
        printf("%d", myArray[i]);
        bl();
    }

    bl();
    ptr = myArray;
    for (int i = 0; i < arraySize; i++)
    {
        printf("%d\n", *ptr);
        ptr++;
    }
    bl();
    // ptr = myArray;
    // printf("%d\n", ptr);
    // printf("%d\n", ptr+arraySize);
    // ptr++;
    // printf("%d\n", ptr);
    int *max = myArray + arraySize;
    for (ptr = myArray; ptr < max; ptr++)
    {
        bool enter = ptr < max;
        printf("%d at position %x entering %s\n", *ptr, ptr, enter ? "true" : "false");
    }
    bl();
    ptr = myArray;
    for (int i = 0; i < arraySize; i++)
    {
        // *(ptr + i) is equivalent to arr[i]
        printf("%d\n", *(ptr + i));
    }

    return 0;
}

void bl()
{
    printf("\n");
}