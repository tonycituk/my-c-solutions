#include <stdio.h>

int main() {
  //int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  //int factorial = 1;
  int i;

  for (i = 0; i < 10; ++i)
  {
      printf("%d",i);
  }

  for (i = 0; i < 10; i++)
  {
      printf("%d",i);
  }

  i = 1;
  printf("\n");
  int a = i++; //1
  printf("%d \n",a);
  int b = ++i; //3
  printf("%d \n",b);
  
  

  //printf("10! is %d.\n", factorial);
}