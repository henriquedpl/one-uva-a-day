#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  Problem 11498	Division of Nlogonia
  Runtime: 0.000s
*/

int main(int argc, char *argv){
  int k;
  int n, m;
  int x, y;

  scanf("%d", &k);
  scanf("%d %d", &n, &m);

  while(k-- > 0){
    scanf("%d %d", &x, &y);
    if ((x == n) || (y == m)) {
      printf("divisa\n");
    }
    else if ((x < n) && (y < m)) {
      printf("SO\n");
    }
    else if ((x < n) && (y > m)) {
      printf("NO\n");
    }
    else if ((x > n) && (y < m)) {
      printf("SE\n");
    }
    else if ((x > n) && (y > m)) {
      printf("NE\n");
    }
    if (k == 0) {
      scanf("%d", &k);
      if (k != 0)
        scanf("%d %d", &n, &m);
    }
  }

  return 0;
}
