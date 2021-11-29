#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 20
#define TRUE 1
#define FALSE 0
typedef struct stack{
	int top;
	int min;
	int items[MAXSIZE];
}  * Stack;

Stack init();
int isEmpty(Stack);
void push(Stack, int);
int pop(Stack);
int showTop(Stack);
void displayStack(Stack);
int minStack(Stack);

int main(){
	int ch=0,x;
	Stack s=init();
	
	
	
	do{
		
		printf("\n\n1.Push a element.\n2.Pop a element\n3.To peak the top\n4.Display the elements\n5.Exit\n\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("\nPlease enter a value to push:");
				scanf("%d",&x);
				push(s,x);
				break;
			case 2:
				x=pop(s);
				printf("\n%d is pop from the stack",x);
				break;
			case 3:
				printf("\nThe top element is:%d ",showTop(s));
				break;
			case 4:
				displayStack(s);
				break;
			case 5:
				printf("\n bye bye..");
			default :
				printf("\nWrong input"); 
								
		}
		
	}while(ch!=5);
	printf("%d",minStack(s));
	return 0;
}
Stack init(){
	Stack s=(Stack)malloc(sizeof(struct stack));
	s->top=-1;
	
	return s;
	
}
int isEmpty(Stack s){
	if(s->top==-1){
		return TRUE;
	}
	return FALSE;
}
void push(Stack s, int val){
	if(s->top==MAXSIZE-1){
		printf("Stack overflowed...!!");
		exit(0);
	}
	if(s->min>val)
		s->min=val;
	s->items[++s->top]=val;	
}
int pop(Stack s ){
	if(isEmpty(s)==TRUE)
	{
		printf("Stack underflow...!!");
		exit(0);
	}
		
	return s->items[s->top--];	
}
int showTop(Stack s){
	if(isEmpty(s)==TRUE)
	{
		return -1;
	}
	return s->items[s->top];
}
void displayStack(Stack s){
	if(isEmpty(s)==TRUE)
	{
		printf("Stack underflow...!!");
		exit(0);
	}
	printf("The elements of the stack are::");
	int i=0;
	for(i=0; i<=s->top; i++){
		printf("%d\t",s->items[i]);
	}
}
int minStack(Stack s)
{
	return s->min;
}
