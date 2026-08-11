#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  Problem 12403	Save Setu
  Runtime: 0.000s
*/

int main(int argc, char *argv){
  char input[16];
  int k = 0;
  int donation;
  int i;
  scanf("%d", &i);
  while(i-- > 0) {
    scanf("%s", (char *) &input);
    if (strcmp(input, "donate") == 0) {
      scanf("%d", &donation);
      k += donation;
    }
    else {
      printf("%d\n", k);
    }
  }
  return 0;
}
