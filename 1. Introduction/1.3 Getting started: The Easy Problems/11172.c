#include <stdio.h>

/*
  Problem 11172	Relational Operator
  Runtime: 0.000s
*/

int main(int argc, char *argv){
  int cases, a, b, i;
  scanf("%d", &cases);
  for(i = 0; i < cases; i++){
    scanf("%d %d", &a, &b);
    if(a == b){
      printf("=\n");
    }
    else if(a < b){
      printf("<\n");
    }
    else{
      printf(">\n");
    }
  }
  return 0;
}
