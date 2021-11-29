#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 100

void insertHeap(int arr[],int *n, int value)
{
	*n=*n+1;
	arr[*n-1]=value;
	int i=*n-1,parent,temp;
	
	while(parent>=0)
	{
		
		parent=i/2;
		if(arr[parent]<arr[i])
		{
			temp=arr[i];
			arr[i]=arr[parent];
			arr[parent]=temp;
			i=parent;
//			printf("Hi");
		}
		else{
			return;
		}
	}
	return;
}

int main()
{
	int arr[MAXSIZE],i,n=0,value=0;
	
	while(1)
	{
		printf("Enter value::");
		scanf("%d",&value);
		if(value==99|| n>MAXSIZE)
		{
			break;
		}
		insertHeap(arr,&n,value);
	}
	for(i=0; i<n; i++)
		printf("%d\t",arr[i]);
	
	
}
