#include <stdio.h>
#include "read.h"

int main(void){
  FILE *fptr=fopen("10.txt","r");
  struct cc* ptr;
  ptr=readcc(fptr,ptr);
  for(int i=0;i<10;i++){
    printf("%s\n",ptr[i].cno );
  }
  printf("a\n");
  int u=0;
  printf("here%p\n",&u);
  ptr=insertionSort(ptr,9);
  for(int i=0;i<10;i++){
    printf("%s\n",ptr[i].cno );
  }
}
