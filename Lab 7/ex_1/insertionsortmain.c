#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "insertionsort.h"

int main(){
  FILE*fptr=fopen("10.txt","r");
  char line[1024];
  struct Employee ptr[10];
  //struct Element temp[1024];
  int i=0;
  while (fgets(line, 1024, fptr)){
    char* token=strtok(line," ");
    strcpy(ptr[i].name,token);
    token = strtok(NULL, " ");
    //printf("%s\n",token );
    ptr[i].id=atoi(token);
    i++;
  }
  iter_is(ptr,10);
  for(int j=0;j<10;j++){
    printf("%d\n",ptr[j].id );
  }
}
