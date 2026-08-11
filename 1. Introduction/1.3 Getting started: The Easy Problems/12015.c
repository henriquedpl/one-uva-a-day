#include <stdio.h>
#include <stdlib.h>


/*
  Problem 12015	Google is Feeling Lucky
  Runtime: 0.000s
*/


int main(int argc, char *argv){
  int cases, i, j;
  int *ranks = malloc(sizeof(int) * 10);
  int max_rank;
  char **pages = malloc(sizeof(char *) * 10);
  for(j = 0; j < 10; j++){
    pages[j] = malloc(sizeof(char) * 100);
  }
  scanf("%d", &cases);
  for(i = 0; i < cases; i++){
    max_rank = -1;
    for(j = 0; j < 10; j++){
      scanf("%s %d", pages[j], &ranks[j]);
      if (ranks[j] > max_rank){
        max_rank = ranks[j];
      }
    }
    printf("Case #%d:\n", i+1);
    for(j = 0; j < 10; j++){
      if(ranks[j] == max_rank){
        printf("%s\n", pages[j]);
      }
    }
  }
  return 0;
}
