#include <stdlib.h>
#include "cycle.h"


void insertFirst(struct linkedList* head,int ele){
  struct node *link= (struct node*)myalloc (sizeof(struct node));
  if (head->count==0){
    head->first=NULL;
  }
  link->element=ele;
  link->next=head->first;
  head->first=link;
  head->count ++;

}

struct node* deleteFirst(struct linkedList* head){
  if (head->count==1){
    head->first=NULL;
    return;
  }
  struct node* temp=head->first;
  head->first= (head->first)->next;
  head->count--;
  myfree (temp,sizeof(struct node));
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

struct linkedList* createList(int n){
  struct linkedList *head=(struct linkedList*) malloc (sizeof(struct linkedList));
  head->count=0;
  for(int i=0;i<n;i++){
    insertFirst(head,rand());
}
return head;
}

struct linkedList* createCycle(struct linkedList* head){
srand(time(0));
int n=(rand()%2);
printf("%d\n",n );
struct node *p1=head->first;
int i=0;
int arr[10];
struct node* arr1[10];
if (n==0){
  return head;
}
else{
  while((p1->next)!=NULL){
    p1=p1->next;
    arr[i]=p1->element;
    arr1[i]=p1;
    i++;
  }
  int k = (rand()%i);
  p1->next=arr1[k];
  return head;
}
}

void makeCircularList(struct linkedList* head){
  int ele;
  struct node* ptr=head->first;
  if (testcyclic(head)==false){
    struct node* ptr=head->first;
    while(ptr->next!=NULL){
      ptr=ptr->next;
    }
    ptr->next=head->first;
    return;
  }
  else{
    //figure out the condition
    while(head->count>0){
      ptr=ptr->next;
      head->count--;
    }
    head->first=ptr;
    printList(head);

    }

printList(head);
  return;
}
