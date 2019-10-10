#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
#include "stack.h"

int main(int argc, char *argv[])
{
  FILE *fileptr=fopen(argv[1],"r");

  struct linkedList *head=(struct linkedList*) malloc (sizeof(struct linkedList));
  head->count=0;

  while(!feof(fileptr)){
    int temp;
    fscanf(fileptr,"%d ",&temp); // why is a space needed???
    push(head,temp);
  }
  fclose(fileptr);
  printList(head);
  while(head->first!=NULL){
    int a= pop(head);
    //printf("%d\n",a );
  }

  printList(head);
}
