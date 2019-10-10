#include <stdio.h>
#include <stdlib.h>
#include "que.h"

int main(void){
  struct Queue*q=newQ();
  int p = isEmptyQ(q);
  printf("is empty= %d",p);
  printQ(q);
  addQ(q,5);
  addQ(q,6);
  addQ(q,4);

  printQ(q);
  delQ(q);
  printQ(q);
  printf("\n%d\n",lengthQ(q));

}
