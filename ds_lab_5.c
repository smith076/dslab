#include<stdio.h>
void tower(int n,char beg, char aux,char end){
    if(n=1){
        printf("Move disk from pole %c to pole %c\n",beg,end);
        return;
    }
    tower(n-1,beg,end,aux);
    printf("move disk %d from pole %c\n",n,beg,end);
    tower(n-1,aux,beg,end);
}
int main()
{
    int num;
    printf("Enter no.of disks: ");
    scanf("%d",&num);
    printf("The sequence of moves involved in the tower of hanoi are: \n");
    tower(num,'A','B','C');
}