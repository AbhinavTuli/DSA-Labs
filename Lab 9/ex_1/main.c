#include <stdio.h>
#include "hash.h"

int main(){
  char str[50];
  char** book=malloc(sizeof(char*)*50);
  book=parse("aliceinwonderland.txt");
  //int cc= coll_count(book,100,50);
  //printf("%d\n", cc);
}
