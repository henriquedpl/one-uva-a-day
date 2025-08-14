#include <stdio.h>
#include <string.h>

/*
  Problem 11764	Jumping Mario
  Runtime: 0.000s
*/

int main(int argc, char *argv) {
  int i, j;
  int n, m, walls[50];
  int high, low;
  scanf("%d", &n);
  for( i = 0; i < n; i++){
    high = 0;
    low = 0;
    scanf("%d", &m);
    for(j=0;j<m;j++){
      scanf("%d", &walls[j]);
    }
    for(j = 0; j<m-1;j++){
      if(walls[j] < walls[j+1]){
        high +=1;
      }
      else if(walls[j] > walls[j+1]) low++;
    }

    printf("Case %d: %d %d\n", i+1, high, low);
  }
  return 0;
}
