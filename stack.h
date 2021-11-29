#ifndef MY_STACK_H
#define MY_STACK_H

#define MAXSIZE 50
#define TRUE 1
#define FALSE 0

typedef struct stack{
	int top;
	int items[MAXSIZE];
}  * Stack;

Stack init();
int isEmpty(Stack);
void push(Stack, int);
int pop(Stack);
int showTop(Stack);
void displayStack(Stack);
#endif
