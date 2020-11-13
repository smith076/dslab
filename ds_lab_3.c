//stack implementation( LIFO or FILO)
//functions: push(overflow),pop(underflow),display 

//Question >>
//Design, develop and implement a menu driven program in c for following operations on stack of integers
//(Array implementation of stack with maximum size MAX)
//a.Push an element on to stack
//b.Pop an element from stack
//c.Demonstrate how stack can be used to check palindrome
//d.Demonstrate overflow and underflow situations on stack
//e.display the status of stack
//f.exit
//appropriate functions for each operation

#include<stdio.h>
#include<stdlib.h>
#define MAX 5   //max size of array
int stack[MAX],top=-1,item;

//function prototypes
void push(int item);
int pop();
void display();
void palindrome();

int main(){                 //main
    int state;
    while(1){
    printf("............STACK OPERATIONS..........\n");
    printf("Press 1 for push operation\n");   //
    printf("Press 2 for pop operation\n");      // 
    printf("Press 3 to check for palindrome\n");    //add sum of numbers
    printf("Press 4 to display the elements\n");
    printf("Press 5 to exit\n");
    printf(".....................................\n");
    scanf("%d",&state);
    switch (state)
    {
    case 1: 
        printf("\nEnter value of item:\t");
        scanf("%d",&item);
        push(item);
        break;
    case 2:
        item=pop();
        if(item!=NULL){
            printf("\nItem popped is= %d\n",item);
        }
        break;
    case 3:
        palindrome();
        break;
    case 4: 
        display();
        break;
    
    case 5:
        exit(0);
    default:
    printf("\nInvalid choice!!\n");
        break;
    }
    }
}

void push(int item){        //push method -- inserting element into stack
    if(top>=MAX-1)
        printf("\nStack Overflow \n");
    else
    {
        //top++;
        stack[++top]=item;
    }  
}

int pop(){                      //pop method, returns the number popped
    //int item =NULL;
    if(top == -1){
        printf("\nStack Underflow\n");
    }
    else{
        top--;
        item = stack[top+1];
       // stack[top+1]=NULL;
    }
    return(item);
}

void display(){                 //displays values of stack
    printf("\n The values are: ");
    for(int i=top;i>=0;i--){
        printf("%d ",stack[i]);
    }
    printf("\n");
}
void palindrome(){
    int j=top,k=0,flag=0;
    if(top == -1){
        printf("Stack is empty\n");
        return;
    }
    while(k<=top/2){
        if(stack[k++]!=stack[j--]){
            flag=1;
            break;
        }
    }
    if(flag){
        printf("\nStack contents are not a palindrome\n");
    }
    else{
        printf("\nStack contents are palindrome\n");
    }
}