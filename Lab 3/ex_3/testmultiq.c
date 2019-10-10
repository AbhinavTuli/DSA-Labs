#include <stdio.h>
#include "multiq.h"
#include <sys/time.h>
typedef struct Queue* MultiQ;

MultiQ loadData(FILE*,MultiQ);
MultiQ testDel(int,MultiQ,int);

int main(void){
  FILE*ptr=fopen("input10.txt","r");
  MultiQ mq= createMQ(11);
  struct timeval t1, t2;
  double elapsedTime;
  gettimeofday(&t1, NULL);
  loadData(ptr,mq);
  printf("%d %d\n",sizeMQ(mq,11),sizeMQbyPriority(mq,1));
  testDel(5,mq,11);
  gettimeofday(&t2, NULL);
  elapsedTime = (t2.tv_sec - t1.tv_sec) * 1000.0;      // sec to ms
  elapsedTime += (t2.tv_usec - t1.tv_usec) / 1000.0;   // us to ms
  printf("Total time is %f ms.\n",elapsedTime);
  printf("%d %d\n",sizeMQ(mq,11),sizeMQbyPriority(mq,1));
}


MultiQ loadData(FILE*ptr,MultiQ mq){
  int a,b;
  while(!feof(ptr)){
    fscanf(ptr,"%d,%d",&a,&b);
    struct Task t1;
    t1.TaskID=a;
    t1.p=b;
    addMQ(mq,t1);
  }
  return mq;
}

MultiQ testDel(int num,MultiQ mq,int a){
  for(int i=0;i<num;i++){
    delNextMQ(mq,a);
  }
  return mq;
}
