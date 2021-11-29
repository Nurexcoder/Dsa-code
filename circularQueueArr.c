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
int showFront();
void displayQueue();

int main()
{
		int ch,val=0;
	do{
		
	
		printf("\n\n1.For enqueue\t\t\t\t2.For dequeue\n");
		printf("3.To check if the queue is empty \t4.Show the front element\n");
		printf("5.Display the queue \t\t\t 6.To exit\n\n");
		printf("Enter your choice::");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter value you want to enter::");
				scanf("%d",&val);
				enqueue(val);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				if(isEmpty())
					printf("The queue is empty...\n");
				else 
					printf("The queue is not empty..\n");
				break;
			case 4:
				val=showFront();
				if(val==-1)
				{
					printf("Queue is empty..");
					
				}
				else
				{
					printf("The top element is::%d",val);
				}
				break;
			case 5:
				displayQueue();
				break;
			case 6:
				printf("Exiting the program...!!");
				break;
			default:
				printf("Wrong input");	
		}
	}while(ch!=6);	
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
	if(rear==-1)
	{
		front=-1;
	}
	
}

int showFront()
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
	if(isEmpty())
	{
		printf("Queue is empty..!!\n");
		return;
	}
	printf("The element of the queue::");
	int i;
	for(i=front; i<(rear+1)%MAXSIZE; i++)
	{
		printf(" %d \t",queue[i]);
	}
	printf("\n");
}

