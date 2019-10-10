#include <stdlib.h>
#include "que.h"

struct Queue* newQ(void){
  struct Queue* q1=(struct Queue*)malloc(sizeof(struct Queue));
  q1->first=NULL;
  q1->last=NULL;
  q1->count=0;
  return q1;
}

int isEmptyQ(struct Queue* q){
  if (q->count==0){
    return 1;
  }
  return 0;
}

struct Queue* delQ(struct Queue* q){
  if (isEmptyQ(q)==1){
    return q;
  }
  q->first= (q->first)->next;
  q->count--;
}

/*int front(struct Queue* q){
  return ((q->first)->element);
}

*/
int lengthQ(struct Queue* q){
  return q->count;
}




/*void printQ(struct Queue* q){
  struct node* ptr=q->first;
  printf("\n[ ");

  while(ptr!=NULL){
    printf("%d, ",ptr->element);
    ptr=ptr->next;
  }
  printf(" ]");
}
*/
