#include <stdio.h>
#include <string.h>

/*
  Problem 10300	Ecological Premium
  Runtime: 0.000s
*/

int main(int argc, char *argv){
  int n;
  int f;
  int s, a, d;
  int result;
  scanf("%d", &n);
  while (n-- > 0){
    scanf("%d", &f);
    result = 0;
    while (f-- > 0) {
      scanf("%d %d %d", &s, &a, &d);
      result += (s * d);
    }
    printf("%d\n", result);
  }
  return 0;
}
