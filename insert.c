#include<stdio.h>

#define MAXSIZE 20

void array_insert(int [],int *, int, int);
void array_insert_end(int [], int *, int);
void array_insert_front(int [], int *, int);
int array_delete(int [], int , int);
void array_display(int [],int);

int main()
{
	int ele[MAXSIZE],n,i,num,pos;
	printf("How many element are there:");
	scanf("%d",&n);
	for( i=0; i<n; i++)
	{
		scanf("%d",&ele[i]);
	}
	array_display(ele,n);
	printf("\n Enter a number to insert in front: ");
	scanf("%d",&num);
	array_insert_front(ele,&n,num);
	array_display(ele,n);
	printf("Enter  a position in which you want to add an element:");
	scanf("%d",&pos);
	printf("\n Enter a number to insert: ");
	scanf("%d",&num);
	array_insert(ele,&n,pos,num);
	array_display(ele,n);
	return 0;
}

void array_display(int ele[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d \t",ele[i]);
	}
	printf("\n");
}
void array_insert_front(int ele[],int *n, int num){
	
	for( int i=(*n); i>0; i--)
	{
		ele[i]=ele[i-1];
	}
	ele[0]=num;
	(*n)++;
	
}
void array_insert(int ele[],int *n, int pos, int num){
	
	for( int i=(*n); i>pos; i--)
	{
		ele[i]=ele[i-1];
	}
	ele[pos]=num;
	(*n)++;	
}
