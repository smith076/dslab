///////////////////////////////////////////////////////////////////////////////
/*
2. Design, Develop and Implement a Program in C for the following operations on Strings
a. Read a main String (STR), a Pattern String (PAT) and a Replace String (REP)
b. Perform Pattern Matching Operation: Find and Replace all occurrences of PAT in STR with REP if PAT exists in STR. Report suitable messages in case PAT does not exist in STR
Support the program with functions for each of the above operations. Don't use Built-in functions.

*/
///////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
int c,m,i,j,k,flag;
char str[100],pat[50],rep[50],ans[150];
void patmat();
void main()
{
	printf("Enter the main string\n");
	gets(str);
	printf("Enter the pattern string\n");
	gets(pat);
	printf("Enter the replacing string\n");
	gets(rep);
	patmat();
	if(flag==1)
	{
		printf("The resultant string is\n");
		puts(ans);
	}
	else
	{
		printf("The pattern is not found\n");
	}
}
void patmat()
{
	while(str[c]!='\0')
	{
		if(str[m]==pat[i])
		{
			m++;
			i++;
			if(pat[i]=='\0')
			{
				flag=1;
				for(k=0;rep[k]!='\0';k++)
				{
					ans[j]=rep[k];
					j++;
					c=m;
					i=0;
				}
			}
		}
		else
		{
			ans[j]=str[c];
			j++;
			c++;
			m=c;
			i=0;
		}
	}
	ans[j]='\0';
}
