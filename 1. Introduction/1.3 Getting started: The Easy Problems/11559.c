#include <stdio.h>
#include <stdlib.h>

/*
  Problem 11559	Event Planning
  Runtime: 0.000s
*/


int main(int argc, char *argv){
  int n, b, h, w;
  int i, j;
  int _w;
  int p;
  int min;
  while (scanf("%d %d %d %d", &n, &b, &h, &w) != EOF){
    min = b + 1;
    for(i = 0; i < h; i++){
      scanf("%d", &p);
      for(j = 0; j < w; j++){
        scanf("%d", &_w);
        if(_w >= n) {
          if(min > p * n && p * n <= b) {
            min = p * n;
          }
        }
      }
    }
    if (min > b)
      printf("stay home\n");
    else
      printf("%d\n", min);
  }
  return 0;
}
