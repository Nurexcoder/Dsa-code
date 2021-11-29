#include<stdio.h>
#include<stdlib.h>
#include "stackEval.h"

#define TRUE 1
#define FALSE 0

Stack init(){
	Stack s=(Stack)malloc(sizeof(struct stack));
	s->top=-1;
	
}
int isEmpty(Stack s){
	if(s->top==-1){
		return TRUE;
	}
	return FALSE;
}
void push(Stack s, float val){
	if(s->top==MAXSIZE-1){
		printf("Stack overflowed");
		exit(0);
	}
	s->items[++s->top]=val;	
}
float pop(Stack s ){
	if(isEmpty(s)==TRUE)
	{
		printf("Stack underflow...!!\nToo many operators...!!");
		exit(0);
	}
		
	return s->items[s->top--];	
}
int showTop(Stack s){
	if(isEmpty(s)==TRUE)
	{
		printf("Stack underflow...!!");
		exit(0);
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


