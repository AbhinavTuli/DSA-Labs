#include <stdlib.h>
#include "linkedlist.h"
#include "stack.h"

void push(struct linkedList*head, int ele){
  insertFirst(head,ele);
}

int pop(struct linkedList* head){
  int a=((head->first)->element);
  deleteFirst(head);
  return a;
}
