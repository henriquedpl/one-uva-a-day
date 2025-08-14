#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  Problem 12550	Language Detection
  Runtime: 0.000s
*/

int main(int argc, char *argv){
  char line[16];
  int i = 1;
  scanf("%s", (char *) line);
  while(line[0] != '#') {
    if (strcmp(line, "HELLO") == 0)
      printf("Case %d: ENGLISH\n", i++);
    else if (strcmp(line, "HOLA") == 0)
      printf("Case %d: SPANISH\n", i++);
    else if (strcmp(line, "HALLO") == 0)
      printf("Case %d: GERMAN\n", i++);
    else if (strcmp(line, "CIAO") == 0)
      printf("Case %d: ITALIAN\n", i++);
    else if (strcmp(line, "BONJOUR") == 0)
      printf("Case %d: FRENCH\n", i++);
    else if (strcmp(line, "ZDRAVSTVUJTE") == 0)
      printf("Case %d: RUSSIAN\n", i++);
    else
      printf("Case %d: UNKNOWN\n", i++);

      scanf("%s", (char *) line);
  }
  return 0;
}
