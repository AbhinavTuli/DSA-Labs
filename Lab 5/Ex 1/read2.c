#include <stdio.h>
#include "read.h"
#include <string.h>

const char* getfield(char* line, int num){
    const char* tok;
    for (tok = strtok(line, ","); tok && *tok; tok = strtok(NULL, ",\n"))
    {
        if (!--num)
            return tok;
    }
    return NULL;
}

void readcc(FILE*fptr,struct cc* ptr){
  //printf("this\n");
  int i=0;
  int size=2000;
  ptr=(struct cc*)malloc(2000);
  //printf("this\n");
  char line[1024];
  while (fgets(line, 1024, fptr)){
    if (i*4==size){
      size=2*size;
      ptr=realloc(ptr,size);
    }
    char* tmp = strdup(line);
    char*p=ptr[i].cno;
    strcpy(p,getfield(tmp, 1));
    p++;
    strcpy(ptr[i].cno,p);
    printf("%s\n",ptr[i].cno );
    tmp = strdup(line);
    strcpy(ptr[i].bcode,getfield(tmp, 2));
    tmp = strdup(line);
    strcpy(ptr[i].exp,getfield(tmp, 3));
    tmp = strdup(line);
    strcpy(ptr[i].fname,getfield(tmp, 4));
    tmp = strdup(line);
    char*q=ptr[i].cno;
    strcpy(q,getfield(tmp, 5));
    q[strlen(q)-1]=0;
    strcpy(ptr[i].lname,q);
    printf("%s\n",ptr[i].lname );
    /*strcpy(ptr[i].cno,"abc");
    printf("a\n");
    strcpy(ptr[i].bcode,"abc");
    printf("b\n");
    strcpy(ptr[i].fname,"abc");
    printf("c\n");
    strcpy(ptr[i].lname,"abc");
    printf("d\n");
    strcpy(ptr[i].exp,"abc");
    printf("e\n"); */
    // NOTE strtok clobbers tmp
    free(tmp);
    size+=sizeof(ptr);
    i++;


}
}
