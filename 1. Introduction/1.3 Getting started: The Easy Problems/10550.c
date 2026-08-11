#include <stdio.h>


/*
  Problem 10550	Combination Lock
  Runtime: 0.000s
*/


#define MARKS_TO_DEG 9
#define FULL_TURN 360

int main(int argc, char *argv){
  int a, b, c, d;
  int ans;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  while(a | b | c | d != 0){
    ans = 720;

    if (a > b) {
      ans += (a - b) * MARKS_TO_DEG;
    }
    else if (b > a) {
      ans += (40 - b + a) * MARKS_TO_DEG;
    }

    ans += FULL_TURN;

    if (c < b) {
      ans += (40 - b + c) * MARKS_TO_DEG;
    }
    else if (b < c) {
      ans += (c - b) * MARKS_TO_DEG;
    }

    if (d > c) {
      ans += (40 - d + c) * MARKS_TO_DEG;
    }
    else if (c > d) {
      ans += (c - d) * MARKS_TO_DEG;
    }

    printf("%d\n", ans);
    scanf("%d %d %d %d", &a, &b, &c, &d);
  }
  return 0;
}
