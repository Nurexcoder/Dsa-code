#include<stdio.h>
#include<stdlib.h>
#include "hlist.h"


void insertMany(int arr[],int n){
	int i=0;
	for(i=0; i<n; i++){
		printf("\n Enter element::");
		scanf("%d",&arr[i]);
	}
}
void insertFront(int arr[],int *n,int val){
	int i=0;
	for(i=(*n); i>0; i--){
		arr[i]=arr[i-1];
	}
	arr[0]=val;
	(*n)++;
}
void insertEnd(int arr[],int *n,int val){
	arr[(*n)]=val;
	(*n)++;
	
}
void displayArr(int arr[],int n){
	int i=0;
	printf("\n\nYour element in the array::");
	for(i=0; i<n; i++){
		printf("%d\t",arr[i]);
	}
}
