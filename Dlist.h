#ifndef my_dlist
#define my_dlist
#define TRUE 1
#define FALSE 0

typedef struct nodetype
{
	int data;
	struct nodetype * prev;
	struct nodetype * next;
} * dlist;

dlist create();
dlist getNode(int);
dlist search(dlist,int);
void display(dlist);
int empty(dlist);
void insRear(dlist,int);
void insPos(dlist,int,int);
void delRear(dlist);
void delPos(dlist,int);



#endif
