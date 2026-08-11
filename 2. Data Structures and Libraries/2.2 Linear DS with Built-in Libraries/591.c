#include <stdio.h>
#include <stdlib.h>

/*
  Problem 591 Box of bricks
  Runtime: 0.000s
*/

int main(int argc, char *argv[]){
  int piles;
  int total_bricks;
  int to_move;
  int i;
  int cases = 1;
  int *pile_array = malloc(sizeof(int) * 50);
  scanf("%d", &piles);
  while(1){
    i = 0;
    to_move = 0;
    total_bricks = 0;
    while(i < piles){
      scanf("%d", &pile_array[i]);
      total_bricks += *(pile_array + i);
      i++;
    }
    i = 0;
    while(i < piles){
      if(pile_array[i] > (total_bricks / piles)){
        to_move = to_move + (pile_array[i] - (total_bricks / piles));
      }
      i += 1;
    }
    printf("Set #%d\n", cases++);
    printf("The minimum number of moves is %d.\n\n", to_move);
    scanf("%d", &piles);
    if(!piles){
      break;
    }
  }
  return 0;
}
