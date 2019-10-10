#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
  srand(time(0));
  int a=rand();
  int b=rand();
  int c=rand();
  printf("%d,%d,%d\n",a,b,c );
}
