#include <stdio.h>

int main(int argc, char *argv[]){
  int b1, g1, c1, b2, g2, c2, b3, g3, c3;
  int to_move = 0, total = 0;
  int to_move_idx = 0;
  int min_to_move = -1;
  while(scanf("%d %d %d %d %d %d %d %d %d", &b1, &g1, &c1, &b2, &g2, &c2, &b3, &g3, &c3) != EOF){
    total = b1 + g1 + c1 + b2 + g2 + c2 + b3 + g3 + c3;

    to_move = total - b1 - c2 - g3;
    min_to_move = to_move;
    to_move_idx = 0;

    to_move = total - b1 - g2 - c3;
    if (to_move < min_to_move){
      min_to_move = to_move;
      to_move_idx = 1;
    }

    to_move = total - c1 - b2 - g3;
    if (to_move < min_to_move){
      min_to_move = to_move;
      to_move_idx = 2;
    }

    to_move = total - c1 - g2 - b3;
    if (to_move < min_to_move){
      min_to_move = to_move;
      to_move_idx = 3;
    }

    to_move = total - g1 - b2 - c3;
    if (to_move < min_to_move){
      min_to_move = to_move;
      to_move_idx = 4;
    }

    to_move = total - g1 - c2 - b3;
    if (to_move < min_to_move){
      min_to_move = to_move;
      to_move_idx = 5;
    }

    if(to_move_idx == 0){
      printf("BCG %d\n", min_to_move);
    }else if(to_move_idx == 1){
      printf("BGC %d\n", min_to_move);
    }else if(to_move_idx == 2){
      printf("CBG %d\n", min_to_move);
    }else if(to_move_idx == 3){
      printf("CGB %d\n", min_to_move);
    }else if(to_move_idx == 4){
      printf("GBC %d\n", min_to_move);
    }else if(to_move_idx == 5){
      printf("GCB %d\n", min_to_move);
    }
}
  return 0;
}
