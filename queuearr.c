#include<stdio.h>
#define MAXSIZE 10
#define TRUE 1
#define FALSE 0


int queue[MAXSIZE];
int front=-1;
int rear=-1;



int isEmpty();
void enqueue(int x);
void dequeue();
void showFront();
void displayQueue();

int main()
{
	if(isEmpty())
	{
		printf("The queue is empty \n");
	}
	enqueue(1);
	enqueue(2);
	enqueue(3);
	displayQueue();
	enqueue(4);
	enqueue(5);
	showFront();
	
	displayQueue();
	dequeue();
	dequeue();
	displayQueue();
	enqueue(10);
	
	
	
	return 0;
}
int isEmpty()
{
	if(front==-1 && rear==-1)
	{
		return TRUE;
	}
	else{
		return FALSE;
	}
}

void enqueue(int x)
{
	if(isEmpty())
	{
		front++;
	}
	else if(rear==MAXSIZE-1)
	{
		printf("The queue is full... %d cannot be enqueue\n",x);
		return;
	}
	printf("The element %d is enqueued..\n",x);
	queue[++rear]=x;
	
}

void dequeue(){
	if(isEmpty())
	{
		printf("Queue is empty..!! Dequeue operation cannot be done...\n");
		return;
	}
	int i;
	for( i=front; i<rear; i++)
	{
		queue[i]=queue[i+1];
		
	}
	rear--;
}

void showFront()
{
	if(isEmpty())
	{
		printf("Queue is empty..!!");
		return;
	}
	printf("The front element of the queue:: %d\n",queue[front]);
}

void displayQueue()
{
	printf("The element of the queue::");
	int i;
	for(i=front; i<rear; i++)
	{
		printf(" %d \t",queue[i]);
	}
	printf("\n");
}

