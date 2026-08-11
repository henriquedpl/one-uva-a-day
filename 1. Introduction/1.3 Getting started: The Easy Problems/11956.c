#include <stdio.h>
#include <string.h>


/*
  Problem 111956 Brainfuck
  Runtime: 0.070s
*/


int main(int argc, char *argv[]){
  int cases, i, j;
  int bytes[100];
  char instructions[100000];
  int pc = 0;
  scanf("%d", &cases);
  for(j = 0; j < cases; j++){
    pc = 0;
    memset(bytes, 0, sizeof(bytes));
    scanf("%s", &instructions);
    i = 0;
    while(instructions[i] != '\0'){
      switch(instructions[i]){
        case '>':
          pc = pc + 1;
          if(pc == 100){
            pc = 0;
          }
          break;
        case '<':
          pc = pc - 1;
          if(pc == -1){
            pc = 99;
          }
          break;
        case '+':
          bytes[pc] = bytes[pc] + 1;
          if(bytes[pc] == 256){
            bytes[pc] = 0;
          }
          break;
        case '-':
          bytes[pc] = bytes[pc] - 1;
          if(bytes[pc] == -1){
            bytes[pc] = 255;
          }
          break;
      }
      i = i + 1;
    }
    printf("Case %d:", j+1);
    for(i = 0; i < 100; i++){
      printf(" %02X", bytes[i]);
    }
    printf("\n");
  }
}
