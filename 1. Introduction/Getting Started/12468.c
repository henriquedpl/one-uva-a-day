#include <stdio.h>
#include <stdlib.h>

/*
  Problem 12468 Zapping
  Runtime: 0.000s
*/



int main(int argc, char *argv) {
  int n;
  int a, b, aux;
  scanf("%d %d", &a, &b);
  while (a != -1 && b != -1) {
    if (a > b) {
      aux = a;
      a = b;
      b = aux;
    }
    if(abs(a - b) <= abs(a  + 100 - b)) {
      printf("%d\n", abs(a-b));
    }
    else
      printf("%d\n", abs(a + 100 - b));
    scanf("%d %d", &a, &b);
  }
  return 0;
}
