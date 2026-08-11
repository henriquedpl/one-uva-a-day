#include <stdio.h>
#include <stdlib.h>

/*
  Problem 11547	Automatic Answer
  Runtime: 0.000s
*/

int main(int argc, char *argv[]){
  int cases, n;
  scanf("%d", &cases);
  while(cases-- > 0){
    scanf("%d", &n);
    printf("%d\n", abs(((((((((n * 567) / 9) + 7492) * 235) / 47) - 498) / 10) % 10)));
  }
  return 0;
}
