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
	enqueue(4);
	displayQueue();
	dequeue();
	dequeue();
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
		queue[++rear]=x; 
	}
	else if(((rear+1)%MAXSIZE)==front)
	{
		printf("The queue is full... %d cannot be enqueue\n",x);
		return;
	}
	else
	{
		rear=rear%MAXSIZE;
		queue[++rear]=x; 

	}
	printf("The element %d is enqueued..\n",x);
	
	
}

void dequeue(){
	if(isEmpty())
	{
		printf("Queue is empty..!! Dequeue operation cannot be done...\n");
		return;
	}
	printf("The element %d is enqueued..\n",queue[front]);

	int i;
	for( i=front; i<rear%MAXSIZE; i++)
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
	for(i=front; i<(rear+1)%MAXSIZE; i++)
	{
		printf(" %d \t",queue[i]);
	}
	printf("\n");
}

