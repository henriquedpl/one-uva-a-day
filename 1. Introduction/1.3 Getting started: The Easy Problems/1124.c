#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 2048

int main(int argc, char* argv){
  char input[2048];
  while(fgets(input, SIZE, stdin) != NULL){
    printf("%s", input);
  }
  return 0;
}
