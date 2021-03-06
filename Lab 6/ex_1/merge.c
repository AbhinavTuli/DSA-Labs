#include<stdio.h>
#include"merge.h"
#include <stdlib.h>
void merge(struct Element* Ls1, int sz1, struct Element* Ls2, int sz2, struct Element*Ls){
  int i=0;
  int j=0;
  int k=0;
  while(i<sz1 && j<sz2){
    if(Ls1[i].cg<Ls2[j].cg){
      Ls[k]=Ls1[i];
      i++;
    }
    else{
      Ls[k]=Ls2[j];
      j++;
    }
    k++;
  }
  if(i!=sz1){
    while(i<sz1){
    Ls[k]=Ls1[i];
    i++;
    k++;
  }
  }

  if(j!=sz2){
    while(j<sz2){
      Ls[k]=Ls2[j];
      j++;
      k++;
  }
  }

}

void rec_mergesort(struct Element* a,int p,int r,struct Element*out){
  if (p>=r){
    out[0]=a[p];
    return;
  }

    int q=floor((p+r)/2);
    rec_mergesort(a,p,q,out);
    rec_mergesort(a,q+1,r,&out[q-p+1]);
    merge(out,q-p+1,&out[q-p+1],r-q,&a[p]);
    for(int g=0;g<r-p+1;g++){
      out[g]=a[p+g];
    }
  return;
}

void iter_mergesort(struct Element* a,int p,int r,struct Element*out){
  struct Element* temp1=malloc((r-p+1)*sizeof(struct Element));
  if (p<r){
    int k=1;
    int i;
    while(k<(r-p+1)){
      i=0;
      while(i<r-p+1){
      merge(&a[p+i],k,&a[p+i+k],k,temp1);
      for(int g=0;g<2*k;g++){
        a[p+i+g]=temp1[g];
      }
      i=i+2*k;
      printf("%d\n",i );
    }
    k=2*k;
  }
}
  out=&a[p];
}
