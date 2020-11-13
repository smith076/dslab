//Design,develop and implement a program in C for converting an Infix
//expression to postfix expression .Program should support for both parenthesized
//and free parenthesized expressions with the operators:+,-,*,/,%(remainder),^(power) 
//and alphanumeric operands

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define SIZE 20
char stack[SIZE];
int top = -1;

void push(char elem){
    stack[++top]=elem;
}
char pop(){
    return(stack[top--]);
}
int precedence(char elem) //decides the precedence
{
    switch (elem)
    {
    case '#': return 0;
    case '(':return 1;
    case '+':
    case '-':return 2;
    case '*':
    case '/':
    case '%':return 3;
    case '^':return 4;
    default:printf("Not a valid expression\n");
            exit(0);
        
    }
}
int main()
{
    char infix[20],postfix[20],ch,elem;
    int i=0,k=0,pr=0; //defined pr=0, not original
    printf("Enter the infix expression:");
    scanf("%s",infix);
    push('#'); //initial element of stack,it is a handler
    //return 0;
    while((ch=infix[i++])!='\0'){
        if(ch=='('){    //verify for left parenthesis
            push(ch);
        }
        else if(isalnum(ch)){
            postfix[k++]=ch;
        }
        else if(ch==')')    //verifying right parenthesis
        {
            while (stack[top]!='(')
            {
                postfix[k++]=pop();
                if(stack[top]=='#'){
                    printf("Not a valid expression\n");
                    exit(0);
                }
            }
            elem=pop(); //removing left parenthesis
            
        }else   //verifying operators
        {
            pr=precedence(ch);
            if(ch=='^'){
                pr++; //if ^ operator appears more than once,evaluation takes place from right to left
            }
            while (precedence(stack[top])>=pr){
                postfix[k++]=pop();
            }
            push(ch);
            
        }
        
        
    }
    
    while (stack[top]!='#'){       //pop from stack till empty
        postfix[k++]=pop();
    }
    postfix[k]='\0';    //make postfix as valid string
    printf("Given infix expression: %s \n Postfix expression:%s \n\n ",infix,postfix);
    //return 0;
}
