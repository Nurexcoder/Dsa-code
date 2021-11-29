#include<stdio.h>

#define MAXSIZE 20


int uniqueFinder(int arr[],int n);

int main()
{
	
	int arr[MAXSIZE],n,i;
	scanf("%d",&n);
	printf("Enter the elements of the array");
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	int ans=uniqueFinder(arr,n);
	printf("%d",ans);
}
int uniqueFinder(int arr[],int n)
{
	int i=0,j=0,count;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(arr[i]==arr[j] && i!=j)
				break;
			
		}
		if(j==n && j!=i)
			printf("%d is a unique element and now unique element=%d \n",arr[i],++count);
		
	}
	return count;
}



