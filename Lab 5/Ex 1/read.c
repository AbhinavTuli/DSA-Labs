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
    char* tmp = strdup(line);
    char*p=ptr[i].cno;
    strcpy(p,getfield(tmp, 1));
    p++;
    strcpy(ptr[i].cno,p);
    //printf("%s\n",ptr[i].cno );
    tmp = strdup(line);
    strcpy(ptr[i].bcode,getfield(tmp, 2));
    tmp = strdup(line);
    strcpy(ptr[i].exp,getfield(tmp, 3));
    tmp = strdup(line);
    strcpy(ptr[i].fname,getfield(tmp, 4));
    tmp = strdup(line);
    char*q=ptr[i].lname;
    strcpy(q,getfield(tmp, 5));
    q[strlen(q)-1]=0;
    strcpy(ptr[i].lname,q);
    //printf("%s\n",ptr[i].lname );
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
    //size=sizeof(struct cc);
    i++;


}
}

void insertInOrder(struct cc cc1,struct cc* ptr,int n){
  printf("iio\n" );
  int i=0;
  if (n!=0){
  while(ptr[i].cno<cc1.cno &&i<n){
    i++;
  }
  }
  ptr=realloc(ptr,(n+1)*sizeof(struct cc));
  if (i==n){
    ptr[n]=cc1;
    return;
  }
  for(int j=n;j>i;j--){
    ptr[j]=ptr[j-1];
  }
  ptr[i]=cc1;
}

/*void insertionSort(struct cc*ptr, int n){
  for (int i=0;i<n;i++){
    insertInOrder(ptr[i],ptr,i);
  }
}*/

void insertionSort(struct cc*ptr, int n){
  //printf("%d\n",n);
  if (n>0){
  insertionSort(ptr,n-1);
  }
  printf("after\n" );
  struct cc* ptr1;
  insertInOrder(ptr[n],ptr1,n);
}
