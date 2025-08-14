#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  Problem 12503	Robot Instructions
  Runtime: 0.000s
*/


int main(int argc, char *argv){
  int n, m, i, p, same;
  char c;
  int instructions[101];
  char instruction[20];
  scanf("%d", &n);
  while(n-- > 0){
    scanf("%d", &m);
      memset(&instructions, 0, 100 * sizeof(int));
      p = 0;
      for(i = 1; i <= m; i++){
        memset(instruction, '\0', 20 * sizeof(char));
        scanf("%s", instruction);
        if(strcmp(instruction, "LEFT") == 0) {
          instructions[i] = -1;
          p -= 1;
        }
        else if (strcmp(instruction, "RIGHT") == 0) {
          instructions[i] = 1;
          p += 1;
        }
        else {
          scanf("%s%d", instruction, &same);
          instructions[i] = instructions[same];
          p += instructions[i];
        }
      }
      printf("%d\n", p);
    }
  return 0;
}
