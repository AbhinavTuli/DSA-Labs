#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
int main(int argc, char *argv[])
{
  FILE *fileptr=fopen(argv[1],"r");

  struct linkedList *head=(struct linkedList*) malloc (sizeof(struct linkedList));
  head->count=0;

  while(!feof(fileptr)){
    int temp;
    fscanf(fileptr,"%d ",&temp); // why is a space needed???
    insertFirst(head,temp);
  }


fclose(fileptr);
printList(head);
deleteFirst(head);
printList(head);

FILE *f2=fopen("output.txt","w");
fprintList(head,f2);
fclose(f2);

//search
int find;
printf("\nEnter the number that you want to find\n");
scanf("%d",&find);
int result =search(head,find);
if (result==1){
  printf("Number found\n");
}
else{
  printf("Number not found\n");
}


delete(head,find);
printList(head);


}
