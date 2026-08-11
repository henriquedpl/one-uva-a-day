#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  Problem 12372	Packing For Holiday
  Runtime: 0.000s
*/


int main(int argc, char *argv){
  int i, w, h, l;
  int c = 0;
  scanf("%d", &i);
  while(i-- > 0) {
    scanf("%d %d %d", &w, &h, &l);
    if(w > 20 || h > 20 || l > 20){
      printf("Case %d: bad\n", ++c);
    }
    else {
      printf("Case %d: good\n", ++c);
    }
  }
  return 0;
}
