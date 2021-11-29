#ifndef MY_STACKEVAL_H
#define MY_STACKEVAL_H

#define MAXSIZE 50

typedef struct stack{
	int top;
	float items[MAXSIZE];
}  * Stack;

Stack init();
int isEmpty(Stack);
void push(Stack, float);
float pop(Stack);
int showTop(Stack);
void displayStack(Stack);
#endif
