#ifndef MY_LIST_H
#defien MY_LIST_H
#define TRUE 1
#define FALSE 0
typedef struct Queue{
	int data;
	struct Queue *next;
} * queue;
queue front=NULL;
queue rear=NULL;

int isEmpty();
void enqueue(int x);
void dequeue();
void peek();
void displayQueue();
#endif
