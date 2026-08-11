#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  Problem 12279	Emoogle Balance
  Runtime: 0.000s
*/


int main(int argc, char *argv){
  int n, i, casen;
  int x;
  int result;
  casen = 0;
  scanf("%d", &n);
  while(n != 0) {
    result = 0;
    for(i = 0; i < n; i++){
      scanf("%d", &x);
      if(x > 0){
        result += 1;
      }
      else {
        result -= 1;
      }
    }
    printf("Case %d: %d\n", ++casen, result);
    scanf("%d", &n);
  }
  return 0;
}
