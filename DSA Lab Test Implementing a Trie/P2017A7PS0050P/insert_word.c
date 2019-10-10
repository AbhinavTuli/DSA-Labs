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

	NODE *temp=root->child;
	NODE *prev,*ending;
	//NODE *head=&temp;
	
	int i=0;
	/*if(temp==NULL){
		root->child=(NODE *)malloc(sizeof(NODE));
		root->child->c=word[i];
		root->child->sibling=NULL;
		root->child->child=NULL;
	}
		
	else*/
	
	while(word[i]!='\0'){
	
	
		if(temp==NULL){
		temp=(NODE *)malloc(sizeof(NODE));
		temp->c=word[i];
		temp->sibling=NULL;
		temp->child=NULL;
		ending=temp;
		temp=temp->child;
		i++;
		continue;
		}
	
		if(temp->c== word[i] && temp->child==NULL){
			
			temp->child=(NODE *)malloc(sizeof(NODE));
			temp->child->sibling=NULL;
			temp->child->child=NULL;
			temp=temp->child;
			i++;
			temp->child->c=word[i];
			ending=temp;
			continue;
		}
		
		else if(temp->c== word[i] && !(temp->child==NULL)){
			ending=temp;
			temp=temp->child;
			i++;
			continue;
		}
		
		if(!temp->c== word[i] ){
		while(temp->sibling && !(temp->sibling->c == word[i])){
				prev=temp;
				temp=temp->sibling;
				if(temp->c < word[i])
					continue;
					
				if(temp->c >word[i]){
					prev->sibling=(NODE *)malloc(sizeof(NODE));
					prev=prev->sibling;
					prev->c= word[i];
					prev->child=NULL;
					temp=prev->child;
					ending=prev;
					i++;
					break;
				
				}
					
		}
		continue;
		
		if(temp->sibling==NULL){
			temp->sibling=(NODE *)malloc(sizeof(NODE));
			temp->sibling->c= word[i];
			ending=temp->sibling;
			temp->sibling->sibling=NULL;
			temp->sibling->child=NULL;
			temp=temp->sibling->child;
			i++;
			continue;
		}
		
		if(temp->sibling->c == word[i]){
			ending=temp->sibling;
			temp=temp->sibling->child;
			i++;
			continue;
		}
	}
}
	
	if(word[i]=='\0'){
		ending->stop_word=TRUE;
	
	}
	
}
