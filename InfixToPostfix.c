#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include "stack.h"

void postfix(char[], char[]);
int isOperator(int);
int precedence(int);

int main()
{
	char infix[MAXSIZE],postfixExp[MAXSIZE];
	int pos=0;
	printf("Enter a infix expression::");
	while((infix[pos++]=getchar())!='\n');
	infix[--pos]='\0';
	printf("The infix epression is:: %s \n ",infix);
	postfix(infix,postfixExp);
	printf("The postfix expression is::%s \n",postfixExp);
	
}

void postfix(char infix[], char postfixExp[]){
	int inPos=0,postPos=0;
	int sym,topsym;
	
	Stack s=init();
	
	while((sym=infix[inPos++])!='\0')
	{
		if(isOperator(sym))
		{
			
			while((predence(sym)<= predence(showTop(s))) && !isEmpty(s)){
				topsym= pop(s);
				postfixExp[postPos++] = topsym;
			}
			push(s,sym);
		}
		else{
			postfixExp[postPos++]=sym;
		}
	}
	while(!isEmpty(s))
	{
		postfixExp[postPos++]= pop(s);
	}
	postfixExp[postPos]='\0';
}

int isOperator(int symbol)
{
	if(symbol=='$' || symbol=='*' || symbol=='/' || symbol=='+' || symbol=='-')
		return TRUE;
	return FALSE;
}
int predence(int symbol)
{
	if(symbol == '$')
		return 3;
	else if(symbol == '*' || symbol == '/')
		return 2;
	return 1;
}
