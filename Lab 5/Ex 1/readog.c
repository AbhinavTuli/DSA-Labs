#include <stdio.h>
#include "read.h"

const char* getfield(char* line, int num){
    const char* tok;
    for (tok = strtok(line, ",");
            tok && *tok;
            tok = strtok(NULL, ",\n"))
    {
        if (!--num)
            return tok;
    }
    return NULL;
}

void readcc(FILE*fptr,struct cc** ptr){
  //printf("this\n");
  int i=0;
  int size=20;
  ptr=(struct cc**)malloc(20);
  //printf("this\n");
  while(!feof(fptr)){
    if (i*4==size){
      size=2*size;
    }
    fscanf(fptr,"%s",ptr[i]->cno);//,ptr[i]->bcode,ptr[i]->exp,ptr[i]->name);
    printf("this\n");
    size+=sizeof(ptr);
    i++;
}
}
