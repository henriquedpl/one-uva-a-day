#include <stdio.h>


int main(int argc, char *argv[]){
  int size, minsize, zfound;
  char path[2000001], current;
  char *p;
  scanf("%d", &size);
  while(size != 0){
    scanf("%s", &path);
    minsize = size + 1;
    size = 0;
    zfound = 0;
    p = (char *) path;
    while(*p){
      if (*p == 'Z'){
        zfound = 1;
        break;
      }
      p++;
    }
    if(zfound){
      printf("0\n");
    }
    else{
      p = (char *) path;
      while(*p == '.') p++;
      current = *p;
      size = 0;
      while(*p){
        size++;
        if(*p == current){
          size = 0;
        }
        else if(*p != '.'){
          current = *p;
          if(size < minsize){
            minsize = size;
          }
          size = 0;
        }
        p++;
      }
      printf("%d\n", minsize);
    }

    scanf("%d", &size);
  }
  return 0;
}
