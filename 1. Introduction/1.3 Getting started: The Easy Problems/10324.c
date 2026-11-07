#include <stdio.h>

#define BUFFER_SIZE 1000005

char line[BUFFER_SIZE];
int changes[BUFFER_SIZE];

int main(){

  int cases, caseno = 0;
  int i, j, aux;
  char *c, current;
  while(scanf("%s", line) != EOF){
    c = (line + 1);
    current = line[0];
    changes[0] = 0;

    for (c = line + 1; *c; c++) {
        int k = c - line;
        changes[k] = changes[k - 1] + (*c != current);
        current = *c;
    }

    scanf("%d", &cases);
    printf("Case %d:\n", ++caseno);
    while(cases-- > 0){
      scanf("%d %d", &i, &j);
      if(changes[i] == changes[j]){
          printf("Yes\n");
      }
      else{
        printf("No\n");
      }

    }
  }
  return 0;
}
