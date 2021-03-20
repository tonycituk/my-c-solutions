#include <stdio.h>

int main(){
    int num = 10;
    int * ptrToNum = &num;

    printf("num: %d is alocated at hexadecimal mem position: %p\n", num, &num);
    printf("num: %d is alocated at decimal mem position: %d\n", num, ptrToNum);
    printf("num: %d is alocated at mem position: %x\n", *ptrToNum, ptrToNum);
    return 0;
}