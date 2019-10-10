#include <stdio.h>
#include <stdlib.h>
int space_used;

void* myalloc(int);
void myfree(void*, int);

int main(void){
  int *k;
  while(k!=NULL){
    int m=(rand()%15000)+10000;
    //printf("%d\n",m);
    int *arr=myalloc(m*sizeof(int));
    k=arr;
    printf("%u %u\n", &arr[0],&arr[m-1]);
//  myfree(arr,m);

  }
  printf("%d\n",space_used );



}

void* myalloc(int n){
  void* ptr;
  ptr=malloc(n);
  space_used+=n;
  return ptr;

}

void myfree(void* p, int n){
  free(p);
  space_used-=n;
}
