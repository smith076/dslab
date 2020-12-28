///////////////////////////////////////////////////////////////////////////////
/*
6. Design, Develop and Implement a menu driven Program in C for the following operations
on Circular QUEUE of Characters (Array Implementation of Queue with maximum size MAX)
a. Insert an Element on to Circular QUEUE
b. Delete an Element from Circular QUEUE
c. Demonstrate Overflow and Underflow situations on Circular QUEUE
d. Display the status of Circular QUEUE
e. Exit
Support the program with appropriate functions for each of the above operations

*/
///////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#define MS 5
typedef struct
{
	int front,rear;
	float item[MS];
}cqueue;
cqueue cq;
void cqinsert(float val)
{
	if(cq.front==(cq.rear+1)%MS)
	{
		printf("Circular queue is full\n");
	}
	else
	{
		cq.rear=(cq.rear+1)%MS;
		cq.item[cq.rear]=val;
	}
}
float cqdelete()
{
	float value;
	if(cq.front==cq.rear)
	{
		printf("Circular queue is empty\n");
	}
	else
	{
		cq.front=(cq.front+1)%MS;
		value=cq.item[cq.front];
		printf("The deleted element is\n");
		printf("%f",value);
	}
}
void cqdisplay()
{
	int i;
	if(cq.front==cq.rear)
	{
		printf("Circular queue is empty\n");
	}
	else
	{
		if(cq.front<cq.rear)
		{
			for(i=cq.front+1;i<=cq.rear;i++)
			{
				printf("%f\t",cq.item[i]);
			}
		}
		else
		{
			if(cq.front!=(MS-1))
			for(i=cq.front+1;i<=(MS-1);i++)
			{
				printf("%f\t",cq.item[i]);
			}
			for(i=0;i<=cq.rear;i++)
			{
				printf("%f\t",cq.item[i]);
			}
		}
	}
}
void main()
{
	cq.front=MS-1;
	cq.rear=MS-1;
	int ch;
	float m;
	while(1)
	{
		printf("\n\tMenu\n1.Cqinsert\n2.Cqdelete\n3.Cqdisplay\n4.Exit\n");
		printf("Enter your option\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter the element to be inserted\n");								scanf("%f",&m);
				cqinsert(m);
				break;
			case 2:cqdelete();
				break;
			case 3:cqdisplay();
				break;
			case 4:exit(0);
			default:printf("Invalid choice\n");
		}
	}
}
