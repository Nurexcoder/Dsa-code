#ifndef MY_LIST_H
#define MY_LIST_H
#define TRUE 1
#define FALSE 0

typedef struct List{
	int data;
	struct List *next;
	struct List *front;
}* List;

List createDList();
List getDNode(int);
int isDEmpty(List);
List insertDFront(List,int);
List insertDEnd(List,int);
void displayDNode(List);
#endif
