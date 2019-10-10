#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "insertionsort.h"

void iter_is(struct Employee*A,int n){
  int i,key;
  for(int j=1;j<n;j++){
    key=A[j].id;
    i=j-1;
    while(i>-1 && A[i].id>key){
      A[i+1]=A[i];
      i--;
    }
    A[i+1].id=key;
  }
}
