#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_SIZE 101

/*
  Problem 12554	 A Special “Happy Birthday” Song!!!
  Runtime: 0.000s
*/


char **read_strings(int n, int maxsize){
  char **strings = malloc(n * sizeof(char *));
  int i;
  for(i = 0; i < n; i++){
    strings[i] = malloc(maxsize * sizeof(char));
    scanf("%s", strings[i]);
  }
  return strings;
}

int main(int argc, char *argv){
  char **names;
  int people;
  int i = 0;
  scanf("%d", &people);

  names = read_strings(people, MAX_STRING_SIZE);
  while(1){
    if (i >= people && i % 16 == 0){
      break;
    }
    printf("%s: ", names[i % people]);

    if(i % 16 == 11){
      printf("Rujia\n");
    }
    else if(i % 4 == 0){
      printf("Happy\n");
    }
    else if(i % 4 == 1){
      printf("birthday\n");
    }
    else if(i % 4 == 2){
      printf("to\n");
    }
    else if(i % 4 == 3){
      printf("you\n");
    }


    i = i+1;
  }
  return 0;
}
