#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include "stackEval.h"

float operation(char,float,float);
float exponential(float,float);
float postfixEval(char []);

int main(){
	
	char expr[100];
	int pos=0;
	printf("Please enter a postfix expression to be evaluated::\n ");
	while( (expr[pos++]=getchar())!='\n');
	expr[--pos]='\0';
	float ans=postfixEval(expr);
	if(ans==-1){
		printf("Too few operators...");
		exit(1);
	}
	printf("Your ans is =%f",ans);
	return 0;
}
float postfixEval(char expr[]){
	Stack s=init();
	int i=0,pos=0;
	char c;
	float value;
	double operand1,operand2;
	for( i=0; (c=expr[i])!='\0'; i++){
		if(isdigit(expr[i])){
			
			push(s,(float)c-48);
		}
		else
		{
			operand1=pop(s);
			operand2=pop(s);
			value = operation(c,operand1,operand2);
			push(s,value);
		}
		
	
	}
	if(s->top!=0){
		return -1;
	}
	
	return pop(s);
}


float operation(char c,float operand1,float operand2){
	float x;
	switch(c){
		case '+': return x=(operand2 + operand1);
		case '-': return x=(operand2 - operand1);
		case '*': return x=(operand2 * operand1);
		case '/': return x=(operand2/operand1);
		case '$': return x=(exponential(operand2,operand1));
		default : printf("Wrong input...");
					exit(1);
	}
	

}
float exponential(float base , float exp){
	int i;
	float prod=1;
	for(i=0; i<exp; i++){
		prod=prod*base;
	}
	return prod;
}
