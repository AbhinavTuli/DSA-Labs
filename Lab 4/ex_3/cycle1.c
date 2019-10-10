#include "cycle.h"

bool testcyclic(struct linkedList*head){
  struct node* hare=head->first;
  struct node* tort=head->first;
  if (head->first==NULL){
    return false;
  }
  if ((head->first)->next==NULL){
    return false;
  }
  if(((head->first)->next)->next== head->first){
    return true;
  }
  int i=0;
  while(hare!=NULL && hare->next!=NULL&&(hare->next)->next!=NULL){
    hare=(hare->next)->next;
    tort=tort->next;
    if(hare==tort||hare->next==tort){
      return true;
    }
  }
  return false;
}
