#include <stdio.h>


/*
  Problem 11044	Searching for Nessy
  Runtime: 0.000s
*/

int main(int argc, char *argv){
  int m, n, c, i, ans;
  scanf("%d", &c);
  for(i = 0; i < c; i++){
    scanf("%d %d", &n, &m);

    ans = 1;
    if((n-2) % 3 == 0)
      ans *= (n-2)/3;
    else
      ans *= (n-3)/3 + 1;

    if((m-2) % 3 == 0)
      ans *= (m-2)/3;
    else
      ans *= (m-2)/3 + 1;

    printf("%d\n", ans);

  }
  return 0;
}
