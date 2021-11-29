#include<stdio.h>
#include<stdlib.h>
#include "listt.h"

int main(){
	List head=createDList();
	int ch,val,x;
	
	do{
		
		printf("\n\n1. For entering value at the front..:");
		printf("\n2.For entering value at the end...");
		printf("\n3.To exit the program..");
		printf("\nPlease enter your choice..:");
		scanf("%d",&ch);
		
		switch(ch){
			case 1:
				printf("\nEnter element you want to add in front..:");
				scanf("%d",&val);
				insertDFront(head,val);
				break;
			case 2:
				printf("\nEnter element you want to add in end..:");
				scanf("%d",&val);
				insertDEnd(head,val);
				break;
			case 3:
				printf("\nExiting programs....\n \n");
				break;
			default:
				printf("\nWrong input..\n\n");		
		}
			displayDNode(head);

		getch();
	}while(ch!=3);

}
