#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "quicksort.h"

int partition(struct Employee* A,int p, int q){
  int x= A[p].id;
  int i=p;
  for(int j=p+1;j<q;j++){
    if (A[j].id<=x){
      i++;
      struct Employee temp=A[i];
      A[i]=A[j];
      A[j]=temp;
    }
  }
  struct Employee temp2=A[p];
  A[p]=A[i];
  A[i]=temp2;
  return i;
}


void iter_qs(struct Employee* A,int n, int s){
  int* temp=malloc((n)*sizeof(int));
  int i=-1;
  int j;
  int count=0;
 while(count<n){
   i=partition(&A[count],0,n-count);
   printf("i %d count %d,n %d \n",i,count,n );
   j=i+count;
   if (i==0){
     count++;
   }
   if(j<=s){
     count=j+1;
     //continue;
   }
   if((n-j-1)<=s){
     if(j+1<n){
     n=j+1;
   }
     continue;
   }
   //printf("%d\n",i );


 }
 return;
  }
