#include "node.h"
#include <stdio.h>
#include <stdlib.h>
NODE *search_letter( NODE *temp, char c);
extern NODE * root;
/*
Precondition: "word" points to the upper-case English word with length > 1.
Post condition: the function returns TRUE if "word" is present in the Trie; FALSE otherwise. Note that global variable "root" stores the root of the Trie data structure.
You have to strictly implement this fun as non-recursive.

*/

boolean search_word(char *word)
{

	NODE *temp=root;
	if(temp==NULL)
		return FALSE;
		
	int i=0;
	
	while(word[i]!='\0'){
		
		temp=search_letter(temp,word[i]);
		if(temp==NULL){
			printf("Not found\n");
			return FALSE;
			}
	
		i++;
	
	}
	
	if(word[i]=='\0'){
		if(temp->stop_word == TRUE){
			printf("found\n");
			return TRUE;
			}
			
		else return FALSE;	
		}
}


NODE *search_letter( NODE *temp, char ch){
	
	temp=temp->child;
	if(temp==NULL)
		return FALSE;
		
	
	if(temp->c == ch){
		return temp;
	}

	while(temp->sibling && !(temp->sibling->c == ch)){
		temp=temp->sibling;
	
		}

	if(temp->sibling==NULL){
		printf("Not found\n");
		return NULL;
		}
		
	else if(temp->sibling->c ==ch)
		return temp->sibling;
}
