#include<stdio.h>
#include<stdlib.h>

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
	if(front==NULL && rear==NULL  )
		return 1;
		return 0;
}

queue createQueue(){
	queue temp=(queue)malloc(sizeof(struct Queue));
	temp->data=-1;
	temp->next=NULL;
}
void enqueue(int x){
	if(isEmpty())
	{
		queue temp=createQueue();
		temp->data=x;
		front=temp;
		rear=temp;
	}
	else{
		queue temp=createQueue();
		temp->data=x;
		rear->next=temp;
		rear=temp;
	}
	printf("The element %d is enqueued.\n",x);
}

void dequeue(){
	if(isEmpty())
	{
		printf("The queue is empty....\n");
		return;
		
	}
	else if(front==rear)
	{
		free(front);
	}
	else
	{
		
		queue temp=front;
		front=front->next;
		free(temp); 
	}
}


int showFront()
{
	if(isEmpty())
	{
		return -1;
	}
	return front->data;
}

void displayQueue()
{
	if(isEmpty())
	{
		printf("The queue is empty..!!");
		return;
	}
	printf("The element of the queue::");
	queue ptr=front;
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
	
	
}


