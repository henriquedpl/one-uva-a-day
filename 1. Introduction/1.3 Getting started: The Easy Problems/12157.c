#include <stdio.h>

/*
  Problem 12157	Tariff Plan
  Runtime: 0.000s
*/

int main(int argc, char* argv){
  int cases, n, i;
  int mile, juice;
  int duration;
  scanf("%d", &cases);
  for(i = 0; i < cases; i++){
    mile = 0;
    juice = 0;
    scanf("%d", &n);
    while(n-- > 0){
      scanf("%d", &duration);
      mile = mile + ((duration / 30) + 1) * 10;
      juice = juice + ((duration / 60) + 1) * 15;
    }
    if(mile == juice){
      printf("Case %d: Mile Juice %d\n", i+1, mile);
    }
    else if(mile < juice){
      printf("Case %d: Mile %d\n", i+1, mile);
    }
    else {
      printf("Case %d: Juice %d\n", i+1, juice);
    }
  }
  return 0;
}
