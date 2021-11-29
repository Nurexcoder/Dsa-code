#include<stdio.h>
#include<stdlib.h>
#include "Dlist.h"

dlist getNode(int val)
{
	dlist node = (dlist) malloc (sizeof(struct nodetype));
	node->prev = NULL;
	node->data = val;
	node->next = NULL;
	return node;
}

dlist create()
{
	dlist head = getNode(-100);
	return head;
}

int empty(dlist head)
{
	if(head->next == NULL)
		return TRUE;
	return FALSE;
}

void display(dlist head)
{
	dlist ptr = head->next;
	if( empty(head))
	{
		printf("List is empty");
		return;
	}
	printf("Your list:"); 
	while(ptr != NULL)
	{
		printf("%d\t",ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
	getch();
}

void insRear(dlist head,int val)
{
	dlist temp = getNode(val);
	dlist ptr;
	if (empty(head))
	{
		head->next = temp;
		temp->prev = head;
	}
	else
	{
		ptr = head->next;
		while(ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
		temp->prev = ptr;
	}
		

}
 
dlist search(dlist head,int value )
{
	int pos=0;
	if (head == NULL)
		printf("List is empty");
	dlist curr = head->next;
	while(curr != NULL)
	{
		 pos++; 
		if(curr->data == value)
		{
			printf("%d found at position %d\n", value,pos);
			return curr;
			
		}
		curr = curr->next;
	          
	}
	printf("%d not found in the list\n",value);
	return NULL;
        
	
	

}

void insPos(dlist head,int key,int val)
{
	dlist node = getNode(val);
	dlist temp=head;
	while(key){
		temp=temp->next;
		key--;
		if(temp==NULL){
			printf("This position doesnot exist...!!");
			return;
		}
	}
	
		
	node->next = temp->next;
	temp->next->prev = node;
	node->prev = temp;
	temp->next = node;

}

void delRear(dlist head)
{
	if(empty(head))
	{
		printf("List is already empty\n");
		return;
	}
	dlist curr,prev;
	curr = head->next;
	while(curr != NULL)
	{
		prev = curr;
		curr = curr->next;
	}
        prev->prev->next = NULL;
	free(curr);

}

void delPos(dlist head,int pos)
{
	if(empty(head))
	{
		printf("List is empty");
		return;
	}
	
	dlist curr,prev;
	
	curr = head;
	while(pos)
	{
		if(curr==NULL){
			printf("This position doesnot exist...!!\n\n");
			return;
		}
		
		prev = curr;
		curr = curr->next;
		pos--;
		
	}
	prev->next = curr->next;
	free(curr);


}




