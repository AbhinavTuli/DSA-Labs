#include <stdio.h>
#include "que.h"
typedef struct Queue* MultiQ;
MultiQ createMQ(int num);
MultiQ addMQ(MultiQ mq, struct Task t);
struct Queue* nextMQ(MultiQ mq,int num);
MultiQ delNextMQ(MultiQ mq,int num);
int isEmptyMQ(MultiQ mq,int num);
int sizeMQ(MultiQ mq, int num);
int sizeMQbyPriority(MultiQ mq, int p);
struct Queue* getQueueFromMQ(MultiQ mq, int p);
struct Queue* addQ(struct Queue* q, struct Task t);
