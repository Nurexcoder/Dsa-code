#include<stdio.h>
#include<stdlib.h>
#include "stack.h"

int main(){
	int ch=0,x;
	Stack s=(Stack)malloc(sizeof(struct stack));
	
	init(s);
	
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
				exit(0);
			default :
				printf("\nWrong input"); 
								
		}
		
		
	}while(ch!=5);
	return 0;
}
