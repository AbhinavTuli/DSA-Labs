#include "node.h"
#include <stdio.h>
#include <stdlib.h>

/*
Precondition: "word" points to the upper-case English word with length > 1.
Post condition: The function inserts each character of "word" in Trie appropriately. Note that global variable "root" stores the root of the Trie datastructure.
You have to strictly implement this function as non-recursive.

*/

void insert_word(char *word)
{

NODE*temp=malloc(sizeof(NODE));
temp=root;
NODE*temp1=malloc(sizeof(NODE));
for (int i=0;word[i]!='\0';i++){
//printf("a\n");
if (search(word[i],temp->child)==NULL){
//printf("b\n");
  temp1=create_node(word[i]);
  insert(&(temp->child),temp1);
}

else{
temp1=search(word[i],temp->child);
}
//printf("c\n");
//temp1=search(word[i],temp->child);
temp=temp1;
}
temp->stop_word=TRUE;
}
