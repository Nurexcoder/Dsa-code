#include<stdio.h>
#include<stdlib.h>
#include "list.h"


List listCreate(){
	List head;
	head=getNode(-100);
	return head;
}

int inputValue(){
	printf("\n\n Enter a value you want to add..:: ");
	int inp;
	scanf("%d",&inp);
	return inp;
}

List getNode(int val){
	List temp;
	temp = (List)malloc(sizeof(struct List));
	temp->data=val;
	temp->next=NULL;
	return temp;
}



int isEmpty(List ch){
	if(ch->next==NULL)
	{
		return 1;
	}
	else 
	{
		return 0;
	}	
}





void insertFront(List head,int val){
	List temp=getNode(val);
	temp->next=head->next;
	head->next=temp; 
}




void insertEnd(List head, int val){
	if(isEmpty(head)==1){
		insertFront(head,val);
		return;
	}
	while(head->next!=NULL){
		head=head->next;
	}
	List temp=getNode(val);
	head->next=temp;
}





void displayNode(List head){
	if(isEmpty(head)==1){
		printf("\nList is empty...");
	}
	printf("\n \nYour Linked List data..::");
	while(head->next!=NULL){
	head=head->next;
	 printf("%d \t",head->data);
	}
	getch();
}







void insertAfter(List head,int ch,int val){
	List ptr=head;
	if(isEmpty(head)==1){
		printf("\nList is empty.....");
		return;
	}
	while(ptr->next!=NULL){
		ptr=ptr->next;
		if(ptr->data==ch)
		{
			break;
		}
		if(ptr->next==NULL){
			printf("\n The entered value not found..");
			return;
		}
	}
	List temp=getNode(val);
	temp->next=ptr->next;
	ptr->next=temp;
}






void listFind(List head,int ch){
	List ptr=head;
	int pos=0;
	while(ptr->next!=NULL){
		ptr=ptr->next;
		pos++;
		if(ptr->data==ch)
		{
			printf("The entered value %d is in the pos: %d",ch,pos);
		}
		if(ptr->next==NULL){
			printf("\n The entered value not found..");
			return;
		}
	}
}
void deleteFront(List head){
	List temp;
	temp=head->next;
	head->next=temp->next;
	free(temp);
	
}
void deleteEnd(List head){
	List prev,ptr;
	ptr=head;
	while(ptr->next!=NULL){
		prev=ptr;
		ptr=ptr->next;	
	}
	free(ptr);
	prev->next=NULL;
	
}
void deletePos(List head,int pos){
	List prev,ptr;
	ptr=head;
	int i=0;
	while(ptr->next!=NULL){
		prev=ptr;
		ptr=ptr->next;
		i++;
		if(i==pos){
			break;
		}	
	}
	prev->next=ptr->next;
	free(ptr);
	
}


