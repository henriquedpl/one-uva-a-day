#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*
  Problem 10424 Greedy Gift Givers
  Runtime: 0.000s
*/

int find_index(char **names, char *name){
  int i;
  for(i=0; i < 10; i++){
    if(strcmp(name, names[i]) == 0){
      return i;
    }
  }
}

int main(){
  int first = 0;
  int n, i, j, idx;
  char **names = calloc(10, sizeof(char *));
  char *name = (char *) malloc(sizeof(char) * 13);
  int net[10], amount, friends;
  for(i = 0; i < 10; i++){
    names[i] = (char*) malloc(sizeof(char) * 13);
  }
  while(scanf("%d", &n) != EOF){
    if(!first){
      first = 1;
    }
    else{
      printf("\n");
    }
    memset(net, 0, sizeof(int) * 10);
    for(i = 0; i < n; i++){
      scanf("%s", names[i]);
    }
    for(i = 0; i < n; i++){
      scanf("%s %d %d", name, &amount, &friends);
      if(friends > 0){
        net[find_index(names, name)] -=  amount -  (amount % friends);
        for(j = 0; j < friends; j++){
          scanf("%s", name);
          net[find_index(names, name)] += amount / friends;
        }
      }
    }
    for(i = 0; i < n; i++)
      printf("%s %d\n", names[i], net[i]);
  }

  return 0;
}
