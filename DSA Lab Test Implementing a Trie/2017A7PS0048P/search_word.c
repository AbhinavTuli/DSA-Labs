#include "node.h"
#include <stdio.h>
#include <stdlib.h>
extern NODE * root;
/*
Precondition: "word" points to the upper-case English word with length > 1.
Post condition: the function returns TRUE if "word" is present in the Trie; FALSE otherwise. Note that global variable "root" stores the root of the Trie data structure.
You have to strictly implement this fun as non-recursive.

*/

boolean search_word(char *word)
{
NODE*temp=root;
for( int i=0;word[i]!='\0';i++){
  if(temp==NULL){
  return FALSE;
  }
  if (search(word[i],temp->child)==NULL){
    return FALSE;
  }
  temp=search(word[i],temp->child);
}
return temp->stop_word;
}
