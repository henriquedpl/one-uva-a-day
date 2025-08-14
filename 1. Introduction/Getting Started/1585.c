#include <stdio.h>

/*
  Problem 1585 - Score
  Runtime: 0.000s
*/


int main(int argc, char **argv) {
  int turns, i, j, score, sequence;
  char scores[80];
  scanf("%d", &turns);
  for(i=0; i<turns; i++){
      score = 0;
      j = 0;
      sequence = 1;
      scanf("%s", scores);
      while(scores[j] != '\0'){
          if(scores[j] == 'O'){
            score += sequence;
            sequence++;
          }
          else {
            sequence = 1;
          }
          j++;
      }
    printf("%d\n", score);
  }
  return 0;
}
