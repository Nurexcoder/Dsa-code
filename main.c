#include<stdio.h>
#include<stdlib.h>
#include "hlist.h"

int main(){
	int ch,val,n;
	int arr[MAX]={1,4,5,2,10};
	n=5;
	displayArr(arr,n);
	do{
		
		printf("\n\n\n1. For entering value at the front..");
		printf("\n2.For entering value at the end..");
		printf("\n3.To exit the program..");
		printf("\n\nPlease enter your choice..:");
		scanf("%d",&ch);
		
		switch(ch){
			case 1:
				printf("\n\nEnter element you want to add in front..:");
				scanf("%d",&val);
				insertFront(arr,&n,val);
				break;
			case 2:
				printf("\n\nEnter element you want to add in end..:");
				scanf("%d",&val);
				insertEnd(arr,&n,val);
				break;
			case 3:
				printf("\n\nExiting programs....\n \n");
				break;
			default:
				printf("\n\nWrong input..\n\n");		
		}
			displayArr(arr,n);

		getch();
	}while(ch!=3);
	return 0;
}
