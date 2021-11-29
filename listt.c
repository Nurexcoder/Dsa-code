#include<stdio.h>
#include<stdlib.h>
#include "list.h"

int main(){
	
	List head=listCreate();
	int ch,val,n,i;
	
	do{
		
		printf("\n\n\n\t1.For entering value at the front..");
		printf("\n\t2.For entering value at the end..");		
		printf("\n\t3.For entering value n number of values at the front..");
		printf("\n\t4.For entering value n number of values at the end..");
		printf("\n\t5.For entering value after a values ..");
		printf("\n\t6.For deleting value from the front..");
		printf("\n\t7.For deleting value at a pos...");
		printf("\n\t8.To exit..");
		printf("\n \nEnter your choice::");
		scanf("%d",&ch);
		switch(ch){
			case 1:
			
				val=inputValue();
				insertFront(head,val);
				displayNode(head);
				break;
			
			case 2: 
				val=inputValue();
				insertEnd(head,val);
				displayNode(head);
				break;
			case 3:
				printf("Enter number of element you want to add..::");
				scanf("%d",&n);
				i=0;
				for( i=0; i<n; i++){
					val=inputValue();
					insertFront(head,val);
				}
				displayNode(head);
				break;
			case 4:
				printf("Enter number of element you want to add..::");
				scanf("%d",&n);
				i=0;
				for( i=0; i<n; i++){
					val=inputValue();
					insertEnd(head,val);
				}
				displayNode(head);
				break;		
			case 5:
				printf("\nEnter the value after which you want to add...::");
				scanf("%d",&n);
				val=inputValue();
				insertAfter(head,n,val);
				break;
				
				
		};
	}while(ch!=8);
	

	
	return 0;
}

