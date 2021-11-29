#ifndef MY_LIST_H
#define MY_LIST_H
#define TRUE 1
#define FALSE 0

typedef struct List{
	int data;
	struct List *next;
}* List;

List listCreate();
void displayNode(List);
int inputValue();
List getNode();
void insertFront(List,int);
void insertEnd(List,int);
void insertAfter(List,int,int);
void listFind(List,int);
int  isEmpty(List);
void deleteFront(List);
void deleteEnd(List);
void deletePos(List,int);
#endif
