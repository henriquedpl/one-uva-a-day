#include <stdio.h>

/*
  Problem 11044	Searching for Nessy
  Runtime: 0.000s
*/

int main(int argc, char* argv){
  int cases, n, m, i, sn, sm;
  scanf("%d", &cases);
  for(i = 0; i < cases; i++){
    scanf("%d %d", &n, &m);
    n = n - 2;
    m = m - 2;
    if (n % 3 == 0){
      sn = n / 3;
    }
    else{
      sn = n / 3 + 1;
    }
    if (m % 3 == 0){
      sm = m/3;
    }
    else{
      sm = m/3 + 1;
    }
    printf("%d\n", sn * sm);
  }
  return 0;
}
