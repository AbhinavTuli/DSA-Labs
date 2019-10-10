#include "node.h"
#include <stdio.h>
#include <stdlib.h>

/*
Precondition: head stores the address of pointer to a node and new_node stores the address of new_node.
“head” refers to any node whose address is stored in the child pointer of some other node.
For example, in the figure given, at level-1, the only head is the node with value “B”. Nodes with respective values “A”, “O”, “A”, “U”, “A” are heads at level-2, and so on.
The new_node's fields are set, i.e. its character field is set to appropriate value, all pointer fields are set to NULL, and stop_word field is set to FALSE.

Post condition: Stores new_node as one of the siblings of head such that all resulting siblings of head are sorted in increasing order as per character stored.
insert function will have binary marking.


*/


void insert(NODE** head, NODE* new_node)
{
	NODE *temp=*(head);
	NODE *prev;
	
	if(temp==NULL){
		temp=(NODE *)malloc(sizeof(NODE));
		*head=new_node;
		temp->sibling=NULL;
		temp->child=NULL;
		return;
	
	}
	
	if(temp->sibling == NULL){
		temp->sibling=(NODE *)malloc(sizeof(NODE));
		temp->sibling=new_node;
		//*head->sibling=temp->sibling;
		temp->sibling->sibling=NULL;
		return;
	}
	
	else{
		prev=temp;
		temp=temp->sibling;
		while(temp){
			if(temp->c < new_node->c){
				prev=temp;
				temp=temp->sibling;
				continue;
			}
				
			else if(temp->c == new_node->c)
				return;
				
			else if(temp->c > new_node->c){
			
				prev->sibling=(NODE *)malloc(sizeof(NODE));
				prev=prev->sibling;
				prev->c= new_node->c;
				prev->child=NULL;
				prev->sibling=temp;
				return;
				
				
			}
			
			if(temp==NULL){
				prev->sibling=(NODE *)malloc(sizeof(NODE));
				prev=prev->sibling;
				prev->c= new_node->c;
				prev->child=NULL;
				prev->sibling=NULL;
				return;
				
			
			}
		
		}
	
	
	
	}
	
}
