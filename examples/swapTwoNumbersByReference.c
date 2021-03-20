#include <stdio.h>

void swap(int * ptr1, int * ptr2);

int main(){
    int number1 = 10, number2 = 20;
    printf("number1 = %d, number2 = %d\n", number1, number2);
    swap(&number1, &number2);
    printf("After swapping\n");
    printf("number1 = %d, number2 = %d\n", number1, number2);
    return 0;
}

void swap(int * ptr1, int * ptr2){
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
}