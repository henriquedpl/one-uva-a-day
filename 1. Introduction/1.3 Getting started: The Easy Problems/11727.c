#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  Problem 11727	Cost Cutting
  Runtime: 0.000s
*/

int main(int argc, char *argv){
  int k, i;
  int s1, s2, s3;
  int aux;

  scanf("%d", &k);
  for(i = 0; i < k; i++) {
    scanf("%d %d %d", &s1, &s2, &s3);

    if (s3 < s2) {
      aux = s2;
      s2 = s3;
      s3 = aux;
    }

    if (s3 < s1) {
      aux = s1;
      s1 = s3;
      s3 = aux;
    }

    if (s2 < s1) {
      aux = s1;
      s1 = s2;
      s2 = aux;
    }

    printf("Case %d: %d\n", (1+i), s2);
  }


  return 0;
}
