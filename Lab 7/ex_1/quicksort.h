#include<stdio.h>
#include <stdlib.h>
#include <string.h>
struct Employee{
  char name[10];
  int id;
};

void iter_qs(struct Employee*A,int n,int s);
int partition(struct Employee*,int p, int q);
int partition_noexch(struct Employee* A,int p, int q);
