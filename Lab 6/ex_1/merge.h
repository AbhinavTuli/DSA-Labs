#include <stdio.h>
#include <math.h>
struct Element{
  char name[20];
  float cg;
};
void merge(struct Element* Ls1, int sz1, struct Element* Ls2, int sz2, struct Element*Ls);
void rec_mergesort(struct Element* a,int p,int r,struct Element*out);
void iter_mergesort(struct Element* a,int p,int r,struct Element*out);
