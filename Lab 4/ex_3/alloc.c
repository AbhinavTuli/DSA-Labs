#include <stdio.h>
#include <stdlib.h>
#include "alloc.h"

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
