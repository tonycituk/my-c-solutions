#include <stdio.h>
int sum (int num) {
    static int numSum = 0;
    numSum += num;
    return numSum;
}

int main() {
    printf("%d ",sum(55));
    printf("%d ",sum(45));
    printf("%d ",sum(50));
    return 0;
}