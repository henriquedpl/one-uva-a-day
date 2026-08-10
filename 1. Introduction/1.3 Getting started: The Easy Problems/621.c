#include <stdio.h>
#include <string.h>

/*
  Problem 621	Secret Research
  Runtime: 0.000s
*/

int main(int argc, char *argv){
  int n;
  int len;
  char s[512];
  scanf("%d", &n);
  while(n-- > 0){
    scanf("%s", (char *) &s);
    len = strlen(s);
    if (strcmp(s, "1") == 0 || strcmp(s, "4") == 0 || strcmp(s, "78") == 0) {
      printf("+\n");
    }
    else if (s[len - 1] == '5' && s[len-2] == '3') {
      printf("-\n");
    }
    else if (s[0] == '9' && s[len -1] == '4') {
      printf("*\n");
    }
    else {
      printf("?\n");
    }
  }
  return 0;
}
