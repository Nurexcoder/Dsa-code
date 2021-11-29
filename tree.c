#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef struct btree{
	int data;
	struct btree *left;
	struct btree *right;
} * BTree;

BTree create();

int main()
{
	BTree root=create();
	printf("\n %d",root->data);
	
}


BTree create()
{
	BTree temp = (BTree)malloc(sizeof(struct btree));
	int data;
	
	printf("\n Enter data (-1 for empty)::");
	scanf("%d",&data);
	if(data==-1)
		return NULL;
	temp->data=data;
	
	printf("Enter data for the left node of %d ",data);
	temp->left=create();
	
	printf("Enter data for the Right node of %d" ,data);
	temp->right=create();
		
	return temp;
	
}
