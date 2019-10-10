#include <stdio.h>

struct Task{
  int TaskID;
  int p;
};

struct node{
  struct Task t;
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
int lengthQ(struct Queue* q);
void printQ(struct Queue* q);
