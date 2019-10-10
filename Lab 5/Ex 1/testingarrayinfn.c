#include <stdio.h>

void foo(int* a){
  a[0]=100;
}
int main(){
  int arr[5];
  for (int i=0;i<5;i++){
    arr[i]=i;
  }
  foo(arr);
  printf("%d\n",arr[0] );
}
