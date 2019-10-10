#include <stdio.h>

int main(){
  char a[5], b[5],c[5];
  scanf("\"%[^,],%[^,],%[^\"]",a,b,c);
  printf("a=%s b=%s c=%sd", a,b,c);
}
