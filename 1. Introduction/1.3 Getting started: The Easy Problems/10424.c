#include <stdio.h>

int reduce(int n){
  if(n < 10) return n;
  int total = 0;
  while(n > 0){
    total += n % 10;
    n /= 10;
  }
  return total;
}

int main(){
  char name1[26], name2[26];
  char *c;
  int total1, total2;
  while(fgets(name1, sizeof(name1), stdin)){
    fgets(name2, sizeof(name2), stdin);
    total1 = 0;
    total2 = 0;
    c = name1;
    while(*c){
      if(*c >= 'A' && *c <= 'Z')
        total1 += *c - 'A' + 1;
      else if(*c >= 'a' && *c <= 'z')
        total1 += *c - 'a' + 1;
      c++;
    }
    c = name2;
    while(*c){
      if(*c >= 'A' && *c <= 'Z')
        total2 += *c - 'A' + 1;
      else if(*c >= 'a' && *c <= 'z')
        total2 += *c - 'a' + 1;
      c++;
    }
    while(total1 > 9)
      total1 = reduce(total1);
    while(total2 > 9)
        total2 = reduce(total2);


    if(total1 == total2){
      printf("100.00 %%\n");
    }
    else if(total1 > total2){
      printf("%.2f %%\n", (float) (total2 * 100.0) / total1);
    }
    else {
      printf("%.2f %%\n", (float) (total1 * 100.0) / total2);
    }
  }
  return 0;


}
