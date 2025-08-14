#include <stdio.h>


/*
  Problem 11364	Parking
  Runtime: 0.000s
*/

int main(int argc, char *argv){
  int c, n, x, i ,j;
  int max, min;
  scanf("%d", &c);
  for(i = 0; i < c; i++){
    scanf("%d", &n);
    max = 0;
    min = 100;

    for(j = 0; j < n; j++){
      scanf("%d", &x);
      if (x < min)
        min = x;
      if (x > max)
        max = x;
    }
    printf("%d\n", (max - min) * 2);
  }

  return 0;
}
