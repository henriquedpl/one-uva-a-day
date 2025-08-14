#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  Problem 12289	One-Two-Three
  Runtime: 0.000s
*/

int comp(char *a, char *b){
  int i;
  int result = 0;
  for(i = 0; i < 3; i++){
    if (*(a + i) == *(b + i)){
      result++;
    }
  }
  return result;
}

int main(int argc, char *argv){
  char line[16];
  int i;
  scanf("%d", &i);
  while(i-- > 0) {
    scanf("%s", (char *) line);
    if(strlen(line) == 5) {
      printf("3\n");
    }
    else if (comp(line, "one") > comp(line, "two")) {
      printf("1\n");
    }
    else {
      printf("2\n");
    }
  }
  return 0;
}
