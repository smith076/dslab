///////////////////////////////////////////////////////////////////////////////
/*
    5b. Solving Tower of Hanoi problem with n disks
*/
///////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<math.h>
void toh(int n,char s,char t,char d);
void main()
{
	int n;
	char s,t,d;
	printf("Enter the number of disks\n");
	scanf("%d",&n);
	toh(n,'s','t','d');
	printf("Total Number of moves are:%d\n",(int)pow(2,n)-1);
    getch();
}
void toh(int n,char s,char t,char d)
{
	if(n==0)
	{
		return;
	}
	toh(n-1,s,d,t);
	printf("%d move %c to %c\n",n,s,d);
	toh(n-1,t,s,d);
}

