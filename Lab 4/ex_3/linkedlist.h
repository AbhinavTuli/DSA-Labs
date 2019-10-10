#include <stdio.h>
#include "alloc.h"
#include <time.h>

struct node{
  int element;
  struct node* next;
};

struct linkedList{
  int count;
  struct node* first;
};

void insertFirst(struct linkedList* head, int ele);
struct node* deleteFirst(struct linkedList* head);
void printList(struct linkedList* head);
int search(struct linkedList* head,int ele);
struct node* delete(struct linkedList*head,int ele);
void fprintList(struct linkedList* head, FILE*f1);
struct linkedList* createList(int n);
void makeCircularList(struct linkedList* head);
struct linkedList* createCycle(struct linkedList* head);
