#include <stdio.h>
#include <string.h>
#include "merge.h"
#include <stdlib.h>

int main(){
  FILE*fptr=fopen("1024.txt","r");
  char line[1024];
  struct Element ptr[1024];
  struct Element out[1024];
  //struct Element temp[1024];
  int i=0;
  while (fgets(line, 1024, fptr)){
    char* token=strtok(line,",");
    strcpy(ptr[i].name,token);
    token = strtok(NULL, ",");
    //printf("%s\n",token );
    ptr[i].cg=atof(token);
    i++;
}
for(int l=0;l<1024;l++){
  printf("%f\n",ptr[l].cg );
}
printf("------------------------------------------------------\n");
rec_mergesort(ptr,0,1023,out);
printf("------------------------------------------------------\n");
for(int k=0;k<1024;k++){
  printf("%f\n",out[k].cg );
}
}
