#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LINE_SIZE 1024

/*
  Problem 272	TEX Quotes
  Runtime: 0.000s
*/


int main(int argc, char *argv[]){
  char *line = malloc(MAX_LINE_SIZE * sizeof(char));
  int i, open;
  open = 0;
  while(1){
      line = fgets(line, MAX_LINE_SIZE, stdin);
      i = 0;
      if(line == NULL){
        break;
      }
      while(line[i] != '\0'){
        if(line[i] == '"'){
          if(open == 0){
            printf("``");
            open = 1;
          }
          else{
            printf("''");
            open = 0;
          }
        }
        else {
          printf("%c", line[i]);
        }
        i = i+1;
    }

  }
  return 0;
}
