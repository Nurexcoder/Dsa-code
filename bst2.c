#include<stdio.h>

typedef struct node{
	int data;
	struct node *left;
	struct node *right;
}* Btree;

Btree create(int);
Btree insert(Btree,int);
int search(Btree,int);

int main()
{
	int data;
	Btree root=create(-1);
	do{
		scanf("%d",&data);
		root=insert(root,data);
	}while(data!=99);
	
	printf("%d",root->right->data);
	
	
	
//	printf("\n%d",search(root,10));
}

Btree create(int data)
{
	Btree newNode=malloc(sizeof(struct node));
	newNode->data=data;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;	
}

Btree insert(Btree root, int data){
	if(root==NULL)
	{
		root=create(data);
	}
	else if(root->data<data)
	{
		root->left=insert(root->left,data);
	}
	else
	{
		root->right=insert(root->right,data);
	}
	return root;
}

int search(Btree root, int data)
{
	if(root->data==data)
	{
		return 1;
		
	}
	else if(root==NULL)
	{
		return 0;
	}
	else if(root->data<data)
	{
		search(root->left,data);
	}
	else{
		search(root->right,data);
	}
}

