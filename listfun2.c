#include<stdio.h>
#include<stdlib.h>
#include "listt.h"

List createDList(){
	List head;
	head=getDNode(-100);
	
	return head;
}
List getDNode(int val){
	List temp;
	temp = (List)malloc(sizeof(struct List));
	temp->front=NULL;
	temp->data=val;
	temp->next=NULL;
	return temp;
}
int isDEmpty(List head){
	if(head->next==NULL)
	{
		return TRUE;
	}
	else 
	{
		return FALSE;
	}
}
List insertDFront(List head,int val){
	List temp=getDNode(val);
	temp->next=head->next;
	temp->front=head;
	head->next=temp; 
}
List insertDEnd(List head,int val){
	if(isDEmpty(head)==TRUE){
		insertDFront(head,val);
		return;
	}
	while(head->next!=NULL){
		head=head->next;
	}
	List temp=getDNode(val);
	temp->front=head;
	head->next=temp;
}
void displayDNode(List head){
	
	printf("\n \nYour Linked List data..::");
	while(head->next!=NULL){
	head=head->next;
	 printf("%d \t",head->data);
	}
	getch();

}
