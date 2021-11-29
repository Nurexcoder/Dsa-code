#include<stdio.h>

#define MAXSIZE 20

void array_insert(int [],int *, int, int);
void array_insert_end(int [], int *, int);
void array_insert_front(int [], int *, int);
int array_search(int [],int, int );
void array_delete_rear(int [], int *);
void array_delete_pos(int [],int *, int);
void array_delete_front(int [], int*) ;
void array_display(int [],int);


int main()
{
	int ele[MAXSIZE],n,i,num,pos,x;
	int ch;
	printf("How many element are there:");
	scanf("%d",&n);
	for( i=0; i<n; i++)
	{
		scanf("%d",&ele[i]);
	}
	
	printf("\n\n Do you want to delete a element in front: (1 to yes ):");
	scanf("%d",&ch);
	
	
	if(ch==1){
		array_delete_front(ele,&n);
		printf("Deletion completed on front....... \n \n ");
		array_display(ele,n);
		
	}
	else{
		printf("Thank you \n \n \n ");
		array_display(ele,n);
	}
	
	printf("Do you want to delete a element in rear(1 to yes ):");
	scanf("%d",&ch);
	if(ch==1){
		array_delete_rear(ele,&n);
		printf("Deletion completed on rear ....... \n \n ");
		array_display(ele,n);
		
	}
	else{
		printf("Thank you \n \n \n ");
		array_display(ele,n);
	}
	printf("Please enter a element you want to delete::");
	scanf("%d",&x);
	pos=array_search(ele,n,x);
	if(pos!=-1)
	{
	
	array_delete_pos(ele,&n,pos);
	printf("Deletion completed ....... \n \n ");
	array_display(ele,n);
}
	else{
		printf("\n\nElement doesnot exist....");
	}

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

int array_search(int ele[],int n, int x)
{
	int i=0;
	for( i=0; i<n; i++){
		if(ele[i]==x)
		{
			return i;
		}
	}
	return -1;
}


void array_delete_rear(int ele[],int *n){
	--(*n);
}
void array_delete_front(int ele[],int *n){
	int i=0;
	for(i=0; i<*(n); i++){
		ele[i]=ele[i+1];
	}
	--(*n);
}
void array_delete_pos(int ele[],int *n, int pos){
	int i=0;
	for(i=pos; i<*(n); i++){
		ele[i]=ele[i+1];
	}
	--(*n);
}
