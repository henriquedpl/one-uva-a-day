#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  Problem 11679	Sub-prime
  Runtime: 0.000s
*/


int main(int argc, char *argv){
  int banks, debentures;
  int from, to, value;
  int reserves[20], pay[20], receive[20];
  int i;
  int possible;
  scanf("%d %d", &banks, &debentures);
  while(banks + debentures > 0){
    possible = 1;
    memset(&reserves, 0,  20 * sizeof(int));
    memset(&pay, 0,  20 * sizeof(int));
    memset(&receive, 0, 20 * sizeof(int));
    for (i = 0; i < banks; i++) {
      scanf("%d", &reserves[i]);
    }
    for(i = 0; i < debentures; i++) {
      scanf("%d %d %d", &from, &to, &value);
      pay[from - 1] += value;
      receive[to - 1] += value;
    }
    i = 0;
    possible = 1;
    while(possible && i < banks) {
      if (reserves[i] + receive[i] < pay[i]) {
        possible = 0;
      }
      else {
        i++;
      }
    }
    if(possible) {
      printf("S\n");
    }
    else {
      printf("N\n");
    }
    scanf("%d %d", &banks, &debentures);
  }
  return 0;
}
