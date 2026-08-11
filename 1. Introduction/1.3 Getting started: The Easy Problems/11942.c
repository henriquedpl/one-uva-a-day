#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  Problem 11942	Lumberjack Sequencing
  Runtime: 0.000s
*/


int main(int argc, char *argv){
  int n, i, j;
  int ls[10];
  int order;
  int ordered;
  scanf("%d", &n);
  for(j = 0; j < n; j++){
    for (i = 0 ; i < 10; i++) {
        scanf("%d", &(ls[i]));
    }

    i = 1;
    ordered = 1;
    if (ls[0] > ls[1]) {
      while(i < 9 && ordered) {
        if (ls[i] < ls[i+1]) {
          ordered = 0;
        }
        i++;
      }
    }
    else {
      while (i < 9 && ordered) {
        if (ls[i] > ls[i+1]) {
          ordered = 0;
        }
        i++;
      }
    }
    if(j == 0) {
      printf("Lumberjacks:\n");
    }
    if (ordered) {
      printf("Ordered\n");
    }
    else {
      printf("Unordered\n");
    }
  }

  return 0;
}
