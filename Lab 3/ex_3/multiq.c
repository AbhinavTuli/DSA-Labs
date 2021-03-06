#include <stdlib.h>
#include "multiq.h"

MultiQ createMQ(int num){
  MultiQ mq= (MultiQ)malloc(num*sizeof(struct Queue));
  for (int i=0;i<num;i++){
    mq[i].first=NULL;
    mq[i].last=NULL;
    mq[i].count=0;
  }
  return mq;
}

MultiQ addMQ(MultiQ mq, struct Task t){
  addQ(&mq[t.p],t);
}

struct Queue* nextMQ(MultiQ mq,int num){
  for (int i=0;i<num;i++){
    if (isEmptyQ(&mq[i])!=1){
      return &mq[i];
    }
    return &mq[num];
  }
}

MultiQ delNextMQ(MultiQ mq,int num){
  for (int i=0;i<num;i++){
    if (isEmptyQ(&mq[i])!=1){
      delQ(&mq[i]);
      break;
    }
}
  return mq;
}

int isEmptyMQ(MultiQ mq,int num){
  for (int i=0;i<num;i++){
    if (isEmptyQ(&mq[i])!=1){
      return 0;
    }
  }
    return 1;
}

int sizeMQbyPriority(MultiQ mq, int p){
  return lengthQ(&mq[p]);
}

int sizeMQ(MultiQ mq, int num){
  int sum=0;
  for(int i=0;i<num;i++){
    sum=sum+lengthQ(&mq[i]);
  }
  return sum;
}

struct Queue* getQueueFromMQ(MultiQ mq, int p){
  return &mq[p];
}

struct Queue* addQ(struct Queue* q, struct Task t1){
  struct node *link= (struct node*)malloc (sizeof(struct node));
  link->t=t1;
  link->next=NULL;
  if (isEmptyQ(q)==1){
    q->first=link;
    q->last=link;
  }
  else{
    (q->last)->next=link;
    q->last=link;
  }

q->count++;
}
