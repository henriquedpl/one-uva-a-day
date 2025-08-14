#include <stdio.h>
#include <stdlib.h>

/*
  Problem 11547	Automatic Answer
  Runtime: 0.000s
*/

int main(int argc, char *argv){
  int c, x;
  scanf("%d", &c);
  while(c-- > 0){
    scanf("%d", &x);
    x = ((((x * 63) + 7492) * 5) - 498);
    printf("%d\n", abs((x / 10) % 10));
  }
  return 0;
}
