#include <stdio.h>

/*
  Problem 10963 Swallowing Grounds
  Runtime: 0.000s
*/


int main(int argc, char *argv){
  int t, n;
  int a, b, c;
  int diff = 0;
  scanf("%d", &n);
  while (n-- > 0) {
    diff = 0;
    scanf("%d", &t);
    if (t == 0) {
      printf("yes\n");
    } else  {
      scanf("%d %d", &a, &b);
      c = a - b;
    }
    while (--t > 0) {
      scanf("%d %d", &a, &b);
      if(a - b != c) {
        diff = 1;
      }
    }

    if(diff) {
      printf("no\n");
    }
    else
      printf("yes\n");
    if (n > 0)
      printf("\n");
  }
  return 0;
}
