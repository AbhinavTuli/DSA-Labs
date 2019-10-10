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

struct cc* readcc(FILE*fptr,struct cc* ptr){
  //printf("this\n");
  int i=0;
  int size=250;
  ptr=(struct cc*)malloc(size);
  //printf("this\n");
  char line[1024];
  while (fgets(line, 1024, fptr)){
    //printf("%d\n",i );
    if (i*250==size){
      size=2*size;
      //printf("New size: %d\n",size);
      ptr=realloc(ptr,size);
    }
    //printf("%s\n",line );
    char* token=strtok(line,",");
    char*p=ptr[i].cno;
    strcpy(p,token);
    p++;
    strcpy(ptr[i].cno,p);
    //printf("%s\n",ptr[0].cno );
    //printf("%s\n",ptr[0].cno );
    token = strtok(NULL, ",");
    strcpy(ptr[i].bcode,token);
    token = strtok(NULL, ",");
    strcpy(ptr[i].exp,token);
    token = strtok(NULL, ",");
    strcpy(ptr[i].fname,token);
    token = strtok(NULL, ",");
    char*q=ptr[i].lname;
    strcpy(q,token);
    q[strlen(q)-2]=0;
    strcpy(ptr[i].lname,q);
    i++;
}
return ptr;
}

struct cc* insertInOrder(struct cc cc1,struct cc* ptr,int n){
  int i=0;
  if (n!=0){
  while(strcmp(ptr[i].cno,cc1.cno)==-1 &&i<n){
    i++;
  }
  printf("%d\n",i );
  }
  //ptr=realloc(ptr,(n+1)*sizeof(struct cc));
  if (i==n){
    ptr[n]=cc1;
    return ptr;
  }
  for(int j=n;j>i;j--){
    ptr[j]=ptr[j-1];
  }
  ptr[i]=cc1;
  return ptr;
}

/*void insertionSort(struct cc*ptr, int n){
  for (int i=0;i<n;i++){
    insertInOrder(ptr[i],ptr,i);
  }
}*/

struct cc* insertionSort(struct cc*ptr, int n){
  //printf("%d\n",n);
  if (n>0){
  ptr=insertionSort(ptr,n-1);
  }
  //printf("after\n" );
  ptr=insertInOrder(ptr[n],ptr,n);
  return ptr;
}
