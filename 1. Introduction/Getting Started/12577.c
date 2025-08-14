#include <stdio.h>
#include <stdlib.h>

/*
  Problem 12577	Hajj-e-Akbar
  Runtime: 0.000s
*/

int main(int argc, char *argv){
  char word[16];
  int i  = 0;
  word[0] = 'x';

  while(word[0] != '*') {
    scanf("%s", word);

    if (word[0] == 'H')
      printf("Case %d: Hajj-e-Akbar\n", ++i);
    else if (word[0] == 'U')
      printf("Case %d: Hajj-e-Asghar\n", ++i);
  }
  return 0;
}
