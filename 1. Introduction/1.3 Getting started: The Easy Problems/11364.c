#include <stdio.h>

/*
  Problem 11364	Parking
  Runtime: 0.000s
*/

int main(int argc, char *argv){
  int cases, i, stores, curr, mini, maxi;
  scanf("%d", &cases);
  while(cases-- > 0){
    mini = -1;
    maxi = -1;
    scanf("%d", &stores);
    while(stores-- > 0){
      scanf("%d", &curr);
      if (mini == - 1 || mini > curr){
        mini = curr;
      }
      if (maxi == -1 || maxi < curr){
        maxi = curr;
      }

    }
    printf("%d\n", 2 * (maxi - mini));
  }
  return 0;
}
