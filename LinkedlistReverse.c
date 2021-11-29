#include<stdio.h>
#include<stdlib.h>

typedef struct List{
	int data;
	struct List *next;
}* List;

List listCreate();
void displayNode(List);
List getNode(int);
void insertFront(List,int);
void insertEnd(List,int);
void insertAfter(List,int,int);
void listFind(List,int);
int  isEmpty(List);
void listDeleteFront(List);
void listDeleteEnd(List);
void listDelPos(List,int);
List reverse(List);



int main(){
	
	List head=listCreate();
	
	insertFront(head,90);
	insertFront(head,10);
	insertFront(head,40);
	insertEnd(head,20);
	insertEnd(head,50);
	insertAfter(head,40,100);
	listFind(head,20);
	displayNode(head);
	reverse(head);
	displayNode(head);
	
	return 0;
}
List listCreate(){
	List head;
	head=getNode(-100);
	return head;
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
		return 0;
	}
	else 
	{
		return 1;
	}	
}


void insertFront(List head,int val){
	List temp=getNode(val);
	temp->next=head->next;
	head->next=temp; 
}
void insertEnd(List head, int val){
	if(isEmpty(head)==0){
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
	if(isEmpty(head)==0){
		printf("\nList is empty...");
	}
	printf("\n \n");
	while(head->next!=NULL){
		head=head->next;
	 	printf("%d \t",head->data);
	 	
	}
}
void insertAfter(List head,int ch,int val){
	List ptr=head;
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
	List ptr=head->next;
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


List reverse(List head)
{
	List prev=head->next;
	List ptr=prev->next;
	prev->next=NULL;
	List temp;
	while(ptr!=NULL)
	{
		temp=ptr;
		ptr=ptr->next;
		temp->next=prev;
		prev=temp;
		
	}
	head->next=prev;

}
