#include <stdio.h>

/*
  Problem 11332	Summing Digits
  Runtime: 0.000s
*/

int g(int x){
  int aux = 0;
  if (x < 10)
    return x;
  else {
    while(x > 0) {
      aux += x % 10;
      x = x / 10;
    }
    return g(aux);
  }

}

int main(int argc, char *argv){
  int n = 1;
  int f;
  scanf("%d", &n);
  while (n != 0){
    printf("%d\n", g(n));
    scanf("%d", &n);
  }
  return 0;
}
