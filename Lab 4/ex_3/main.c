#include <stdio.h>
#include <stdlib.h>
#include "cycle.h"

int main(void){
  srand(time(0));
  int n=10;
  //printf("%lu\n",n );
  struct linkedList *head=createList(n);
  FILE*ptr;
  ptr=fopen("output.txt","w");
  fprintf(ptr, "%d\n",space_used);
  head=createCycle(head);
  bool x=testcyclic(head);
  printf(x ? "true\n" : "false\n");
  makeCircularList(head);
  x=testcyclic(head);
  printf(x ? "true\n" : "false\n");
}

//code is almost perfect, except for the random size of array, idk how to get rand() to give a number that big.
//also haven't made cycle2.c as I dunno what it means
//haven't done ex4 c
//in ex5 i haven't used myFree to delete nodes. Output the total heap space used at different points.
