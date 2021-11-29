#include<stdio.h>

typedef struct node{
	int data;
	struct node* left;
	struct node* right;
	
} * Btree;

Btree insert(Btree, int);
void preOrdered(Btree);
void postOrdered(Btree);
void unOrdered(Btree);

int main()
{
	Btree root=NULL;
	int ch;
	printf(" Please enter data(-99 if you want to stop )::");
	while(1){
		printf("\nEnter data::");
		scanf("%d",&ch);
		if(ch==-99)
			break;
		root = insert(root,ch); 	
	}
	
	preOrdered(root);
//	postOrdered(Btree);
//	unOrdered(Btree);
	return 0;
}


Btree insert(Btree root, int ch)
{
	
	if(root==NULL)
	{	root = (Btree) malloc(sizeof(struct node));
		root->data=ch;
		root->left=NULL;
		root->right=NULL;
		return root;
	}
	else
	{
		if(root->data>=ch)
		{
			root->left = insert(root->left,ch);
			
		}
		else
		{
			root->right= insert(root->right,ch);
		}
		return root;
		
	}
	
}

void preOrdered(Btree temp)
{
	if(temp==NULL)
		return;
	printf("%d\t",temp->data);
	preOrdered(temp->left);
	preOrdered(temp->right);
	
}


