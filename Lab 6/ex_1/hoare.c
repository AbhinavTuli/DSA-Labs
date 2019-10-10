#include <stdio.h>
int partition(int* A, int q,int r){
  int x=A[r];
  int i=q-1;
  int j=r+1;
  while(1){
    while(1){
      j--;
      printf("j=%d, A[j]=%d\n",j,A[j] );
      if (A[j]<=x){
        break;
      }
    }
    while(1){
      j--;
      printf("i=%d, A[i]=%d\n",i,A[i] );
      if (A[i]>=x){
        break;
      }
    if(i<j){
      int temp =A[i];
      A[i]=A[j];
      A[j]=temp;
    }
    else{
      return j;
    }
  }
}
}
int main(){
int arr[5];
arr[0]=3;
arr[1]=7;
arr[2]=4;
arr[3]=2;
arr[4]=6;
int p=partition(arr,0,4);
printf("%d\n",p );

printf("Array\n");
for (int h=0;h<5;h++){
  printf("%d\n",arr[h]);
}
}
