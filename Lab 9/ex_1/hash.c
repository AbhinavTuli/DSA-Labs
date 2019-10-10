#include "hash.h"
int hash(char* str, int i,int ts){
  int sum=0;
  for (int i=0;i<strlen(str);i++){
    sum+=(int)str[i];
  }
  sum=sum%i;
  sum=sum%ts;
  return sum;
}

int coll_count(char** ls,int i,int ts, int n){
  int cc=0;
  int arr[ts];
  for (int k=0;k<ts;k++){
    arr[k]=0;
  }
  for(int j=0;j<n;j++){
    arr[hash(ls[j],i,ts)]+=1;
  }
  for (int l=0;l<n;l++){
    if (arr[l]>1){
      cc+= arr[l]-1;
    }
  }
  return cc;
}

char** parse(char* filename){
  FILE*fp=fopen(filename,"r");
  char** book= malloc(10*sizeof(char*));
  for (int i=0;i<10;i++){
    book[i]=malloc(50*sizeof(char));
  }
  char line[50];
  int count=0;
  int size=10;
  while(!feof(fp)){
    printf("ab\n");
    if (count>size){
      size=2*size;
      realloc(book,size*sizeof(char*));
      for (int j=size;j<2*size;j++){
        book[j]=malloc(50*sizeof(char));
      }
    }
    fscanf(fp,"%s",&line);
    for (int k=0;k<50;k++){
      if (line[k]=='\n'){
        strcpy(book[count],line);
        count++;
        break;
        printf("count++\n");
      }
      if (isalpha(line[k]==0)&& line[k]!=' '){
        break;
        
      }
    }
  }
  printf("No. of lines - %d\n",count);
  return book;
}
