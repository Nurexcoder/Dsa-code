#include<stdio.h>

#define MAXSIZE 20

void array_insert(int [], int, int);
void array_insert_end(int [], int *, int);
int array_delete(int [], int , int);
void array_display(int [],int);

int main()
{
	int ele[MAXSIZE],n,i,num;
	printf("How many element are there?\n");
	scanf("%d",&n);
	for( i=0; i<n; i++)
	{
		scanf("%d",&ele[i]);
	}
	array_display(ele,n);
	printf("\n Enter a number to insert: ");
	scanf("%d",&num);
	array_insert_end(ele,&n,num);
	array_display(ele,n);
	return 0;
}

void array_display(int ele[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d \t",ele[i]);
//		printf("\n");
	}
}
void array_insert_end(int ele[], int *n , int num )
{
	ele[(*n)]=num;
	(*n)++;
}
