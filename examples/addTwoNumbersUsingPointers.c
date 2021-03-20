#include <stdio.h>

int main(){
    //declare 2 numbers 1 result variable and them pointers
    int num = 10;
    int * ptrToNum = &num;
    int numTwo = 10;
    int * ptrToNumTwo = &numTwo;
    int result;
    int * ptrToResult = &result;

    //make tthe sum
    *ptrToResult = *ptrToNum + *ptrToNumTwo;

    printf("%d + %d is equals to %d", num, numTwo, result);
    return 0;
}