#include <stdio.h>
struct node{
  int element;
  struct node* next;
};

struct Queue{
  int count;
  struct node* first;
  struct node* last;
};

struct Queue* newQ(void);
int isEmptyQ(struct Queue* q);
struct Queue* delQ(struct Queue* q);
int front(struct Queue* q);
struct Queue* addQ(struct Queue* q, int e);
int lengthQ(struct Queue* q);
void printQ(struct Queue* q);
