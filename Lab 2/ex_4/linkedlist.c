#include <stdlib.h>
#include "linkedlist.h"


void insertFirst(struct linkedList* head,int ele){
  struct node *link= (struct node*)malloc (sizeof(struct node));
  if (head->count==0){
    head->first=NULL;
  }
  link->element=ele;
  link->next=head->first;

  head->first=link;
  head->count ++;

}

struct node* deleteFirst(struct linkedList* head){
  head->first= (head->first)->next;
  head->count--;
}

void printList(struct linkedList* head){
  struct node* ptr=head->first;
  printf("\n[ ");

  while(ptr!=NULL){
    printf("%d, ",ptr->element);
    ptr=ptr->next;
  }
  printf(" ]");
}
void fprintList(struct linkedList* head, FILE* f1){
  struct node* ptr=head->first;
  fprintf(f1,"\n[ ");

  while(ptr!=NULL){
    fprintf(f1,"%d, ",ptr->element);
    ptr=ptr->next;
  }
  fprintf(f1," ]");

}

int search(struct linkedList* head,int ele){
  struct node* ptr=head->first;
  while(ptr!=NULL){
    if(ptr->element==ele){
      return 1;
    }
    ptr=ptr->next;
  }
  return 0;
}

struct node* delete(struct linkedList*head,int ele){
  struct node* ptr=head->first;
  if (ptr->element==ele){
    head->first=ptr->next;
    head->count--;
  }
  else{
    while(ptr->next!=NULL){
      if((ptr->next)->element==ele){
        ptr->next=(ptr->next)->next;
        head->count--;
  }
  ptr=ptr->next;


}
}
}
