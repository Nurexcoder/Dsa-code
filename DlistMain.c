#include<stdio.h>
#include "Dlist.h"

int main()
{
	dlist head = create();
	int option;
	int val1,key;

	do
	{
		printf("1.Insert a node at the end \n");
		printf("2.Insert a node at the position\n");
		printf("3.Delete a node from end \n");
		printf("4.Delete a node from a position \n");
		printf("5.Search for the position .\n");
        printf("6.Exit\n");
        printf("Enter your choice::");
		scanf("%d",&option);

		switch(option)
		{
			
			case 1:
				printf("Enter data to be inserted at the end: ");
				scanf("%d",&val1);
				insRear(head,val1);
				break;
			case 2:
				printf("Enter data to be inserted at postion: ");
				scanf("%d",&val1);
				printf("Enter the position(Position starts from 1): ");
				scanf("%d",&key);
				insPos(head,key,val1);
				break;
			case 3:
				delRear(head);
				break;
			case 4:
				printf("Enter the postion you want to delete from(Position starts from 1): ");
				scanf("%d",&key);
				delPos(head,key);
				break;
			case 5:
				printf("Enter the data you are searching for : ");
				scanf("%d",&key);
				search(head,key);
				break;
			case 6:
				break;	
			default:
				printf("INPUT ERROR");

		}
		display(head);
		printf("\n\n");
	}
	while(option != 6);
		

	return 0;
}

