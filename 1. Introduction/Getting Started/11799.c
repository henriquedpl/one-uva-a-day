#include <stdio.h>

/*
  Problem 10300	Horror Dash
  Runtime: 0.000s
*/

int main(int argc, char *argv){
  int n;
  int f;
  int s;
  int max;
  int i = 0;
  scanf("%d", &n);
  while (n-- > 0){
    scanf("%d", &f);
    max = -1;
    while (f-- > 0) {
      scanf("%d", &s);
      if(s > max)
        max = s;
    }
    printf("Case %d: %d\n", ++i, max);
  }
  return 0;
}
