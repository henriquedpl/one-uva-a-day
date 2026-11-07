#include <cstdio>
#include <cstring>
#include <cstdlib>

/*
  Problem 10038	Jolly Jumpers
  Runtime: 0.000s
*/

#define ARR_SIZE 3005

using namespace std;

int main(){
  char seen[ARR_SIZE];

  int n;
  long long prev, curr;
  bool j;
  while(scanf("%d", &n) == 1){
    memset(seen, 0, sizeof(seen));

    scanf("%lld", &prev);
    for(int i = 1; i < n; i++){
      scanf("%lld", &curr);
      if (llabs(curr - prev) < ARR_SIZE){
          seen[llabs(curr - prev)] = 1;
      }
      prev = curr;
    }

    j = true;
    for(int i = 1; i <= n - 1; i++){
      if(!seen[i]){
        j = false;
        break;
      }
    }

    if(j)
      printf("Jolly\n");
    else
      printf("Not jolly\n");
  }

}
