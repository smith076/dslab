///////////////////////////////////////////////////////////////////////////////
/*
1. Design, Develop and Implement a menu driven Program in C for the following Array operations
a. Creating an Array of N Integer Elements
b. Display of Array Elements with Suitable Headings
c. Inserting an Element (ELEM) at a given valid Position (POS)
d. Deleting an Element at a given valid Position(POS)
e. Exit.
Support the program with functions for each of the above operations.
*/
///////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
int n,a[10],ELEM,pos,j;
void create(){
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the array elements are\n");
	for(j=0;j<n;j++){
		scanf("%d",&a[j]);
	}
}
void display(){
	if(n==0){
		printf("Empty array\n");
	}
	else{
		printf("The array elements are\n");
		for(j=0;j<n;j++){
			printf("%d\t",a[j]);
		}
	}
}
void insertion(){
	if(n==0){
		printf("Empty array\n");
	}
	else{
		printf("Enter the position of element to be inserted\n");
		scanf("%d",&pos);
		printf("Enter the element to be inserted\n");
		scanf("%d",&ELEM);
		if(pos>=0&&pos<=n){
			for(j=n-1;j>=pos;j--){
				a[j+1]=a[j];
			}
			n=n+1;
			a[pos]=ELEM;
			display();
		}
		else{
			printf("%d is a invalid position\n",pos);
		}
	}
}
void deletion(){
	if(n==0){
		printf("Empty array\n");
	}
	else{
		printf("Enter the position of element to be deleted\n");
		scanf("%d",&pos);
		if(pos>=0&&pos<=n-1){
			for(j=pos;j<n-1;j++){
				a[j]=a[j+1];
			}
			ELEM=a[pos];
			n=n-1;
			display();
		}
		else{
			printf("%d is a invalid position\n",pos);
		}
	}
}
void main(){
	int ch;
	while(1){
		printf("\n-----MENU-----\n");
		printf("1.Create\n2.Display\n3.Insertion  \n4.Deletion    \n5.Exit\n");
		printf("Enter your option\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:create();
       				break;
			case 2:display();
       				break;
			case 3:insertion();
      				 break;
			case 4:deletion();
       				break;
			case 5:exit(0);
			default:printf("Invalid choice\n");
		}
	}
}
