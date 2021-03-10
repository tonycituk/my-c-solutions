#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int x;
  int y;
} point;


int main() {
  point * mypoint = (point *) malloc(sizeof(point));
  mypoint->x = 10;
  mypoint->y =5 ;
  printf("mypoint coordinates: %d, %d\n", mypoint->x, mypoint->y);

  free(mypoint);
  return 0;
}