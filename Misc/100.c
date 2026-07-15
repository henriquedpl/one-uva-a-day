#include <stdio.h>

int get_chain_length(int a){
  int result = 1;
  while(a > 1){
    if(a % 2 == 0){
      a = a / 2;
    }
    else {
      a = a * 3 + 1;
    }
    result += 1;
  }
  return result;
}

int main(int argc, char *argv){
  int i, j, _i, _j, current;
  int max_chain_size = 0;
  int chain_length;
  while(scanf("%u %u", &i, &j) != EOF){
    if(i > j){
      _j = i;
      _i = j;
    }
    else{
      _i = i;
      _j = j;
    }

    max_chain_size = 0;
    for(current = _i; current <= _j; current++){
      chain_length = get_chain_length(current);
      if(chain_length > max_chain_size){
        max_chain_size = chain_length;
      }
    }
    printf("%u %u %u\n", i, j, max_chain_size);
  }
  return 0;
}
