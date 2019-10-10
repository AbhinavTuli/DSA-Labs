#include "node.h"
#include <stdio.h>
#include <stdlib.h>
extern NODE * root;
/*
Precondition: "roo" points to the root of Trie. Note that here root of Trie is passed explicitly.
Post condition: If all the words stored in Trie are arranged in lexicographically increasing order, this function will print the last character of each word in same order.
It does so recursively. For example, for the Trie shown in question, it prints D E D K T M M N R M E N N L N N R.
You have to strictly implement this function as a recursive function.

*/

void traverse_tree(NODE *roo)
{

	NODE *temp=roo;
	if(temp== NULL)
		return;
	
	if(temp->stop_word==TRUE){
			printf("%c ",temp->c);
			//temp->stop_word=FALSE;
			}
	
	traverse_tree(temp->child);
	

	
	traverse_tree(temp->sibling);
	
}
