#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>

/*
  Problem 10684	The jackpot
  Runtime: 0.060s
*/

#define ARRAY_SIZE 10000

using namespace std;
int ints[ARRAY_SIZE];


int main(){
  int length, sum, max_sum;
  cin >> length;
  while(length != 0) {
    sum = 0;
    max_sum = 0;
    for(int i = 0; i < length; i++){
      cin >> ints[i];
      sum += ints[i];
      if(sum < 0){
        sum = 0;
      }
      if(sum > max_sum){
        max_sum = sum;
      }
    }
    if(sum > 0){
      cout << "The maximum winning streak is " << max_sum << '.' << endl;
    }
    else {
      cout << "Losing streak." << endl;
    }
    cin >> length;
  }

  return 0;
}
