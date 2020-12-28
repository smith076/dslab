#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define MAX 5
int c;
struct student
{
	char name[25],usn[12],branch[10],phon[11];
	int sem;
	struct student *next;
};
typedef struct student node;
node *head = NULL;
int countnodes()
{
	node *p;
	p=head;
	c=0;
	while(p!=NULL)
	{
		p=p->next;
		c++;
	}
	return c;
}
node *getnode()
{
	node *nn;
	nn=(node*)malloc(sizeof(node));
	printf("Enter student details \n");
	printf("Name:");
	scanf("%s",nn->name);
	printf("USN:");
	scanf("%s",nn->usn);
	printf("Branch:");
	scanf("%s",nn->branch);
	printf("Phone NO:");
	scanf("%s",nn->phon);
	printf("SEM:");
	scanf("%d",&nn->sem);
	nn->next=NULL;
	return nn;
}
node *display()
{
	node *p;
	if(head==NULL)
	printf("No student data\n");
	else
	{
		p=head;
		printf("Name\tUSN\t\tBranch\tPhoneNO\tSEM\n");
		while(p!=NULL)
		{
		printf("%s\t%s\t%s\t%s\t%d\n",p->name,p->usn,p->branch,p->phon,p->sem);
		p=p->next;
		}
		printf("The number of nodes in list is %d",countnodes(head));
	}	
	return head;
}
node *create()

{
	node *nn;
	if(countnodes(head)==MAX)
	{
		printf("List is overflow");
	}	
	
	else if(head==NULL)
	{
		nn=getnode(head);
		head=nn;
	}
	else
	{
		nn=getnode(head);
		nn->next=head;
		head=nn;
	}	
	return head;
}
node *insertfront()
{
	create();
}
node *insertrear()
{
	node *nn,*p;
	if(countnodes(head)==MAX)
	printf("List is overflow");
	else
	{
		p=head;
		if(head==NULL)
		{
			nn=getnode(head);
			head=nn;
		}
		else
		{
			while(p->next!=NULL)
			{
				p=p->next;
			}
			nn=getnode(head);
			p->next=nn;
		}
	}
	return head;
}
node *deletefront()
{
	node *p;
	if(head==NULL)
	{
		printf("No data\n");
	}
	else
	{
		p=head;
		head=head->next;
	}
	free(p);
	return head;
}

node *deleterear()
{
	node *p,*q;
	if(head==NULL)
	{
		printf("No data\n");
	}
	else if(countnodes(head)==1)
	{
		p=head;
		head=NULL;
		free(p);
		printf("Node is Deleted");
	}
	else
	{
		p=head;
		while((p->next)->next!=NULL)
		{
			p=p->next;
		}
		q=p->next;
		p->next=NULL;
		free(q);
	}
	return head;
}
void main()
{
	int ch,i,n;
	node *head;
	head=NULL;
	do
	{
		printf("\n\t*...Student Data...*");
		printf("\n1.Create\n2.Display\n3.Insertfront\n4.Insertrear\n5.Deletefront\n6.Deleterear\n7.Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter number of students\n");
					scanf("%d",&n);
					for(i=0;i<n;i++)
					create();
					break;
			case 2:display();
				break;
			case 3:insertfront();
				break;
			case 4:insertrear();
				break;
			case 5:deletefront();
				break;
			case 6:deleterear();
				break;
			case 7:exit(0);

			default:printf("Invalid choice\n");
		}
	}while(ch>=1&&ch<=7);	
}
