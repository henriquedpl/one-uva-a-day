#include <stdio.h>

/*
  Problem 10071 - - Back to High School Physics
  Runtime: 0.020s
*/


int main(int argc, char **argv){
  int v, t;
  while(scanf("%d %d", &v, &t) != EOF){
    printf("%d\n", 2 * v * t);
  }
  return 0;
}
