//create menu driven program to perform operations on an array

#include<stdio.h>
#include<stdlib.h>
int a[20],n,elem,i,pos;
void create();
void display();
void insert();
void delete1();

int main(){
    int choice;
    while(1){
        {
        choice=0; // to select an option of switch
        printf("\n--------MENU--------\n");
        printf("1.CREATE\n");
        printf("2.DISPLAY\n");
        printf("3.INSERT\n");
        printf("4.DELETE\n");
        printf("5.EXIT\n");
        printf("----------------------");
        printf("ENTER YOUR CHOICE: \t");
        scanf("%d",&choice);
        switch(choice){
            case 1: create();
                    break;
            case 2: display();
                    break;
            case 3: insert();
                    break;
            case 4: delete1();
                    break;
            case 5:{ exit(0);
            default: printf("Invalid choice\n");
            return 1;}
        }
    }
    return 1;
}
}

void create(){
    printf("Enter size of array elements: \t");
    scanf("%d",&n);
    printf("Enter elemenets of the array: \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void display(){
    printf("The array elements are: \n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
void insert(){
    printf("Enter the position of the new element: \t");
    scanf("%d",&pos);
    pos--; //actual position is one more than rray index
    if(pos>=0 && pos <=n){
        printf("Enter the element to be inserted:\t");
        scanf("%d",&elem);
        for(i=n-1;i>=pos;i--){
            a[i+1]=a[i];
        }a[pos]=elem;
        n=n+1;
    }else{
        printf("Invalid position\n");
    }
}
void delete1(){
    printf("Enter the position of the elemenet to be deleted: \t");
    scanf("%d",&pos);
    pos--;
    if(pos>=0 && pos<n){
        elem=a[pos];
        for(i=pos;i<n-1;i++){
            a[i]=a[i+1];
        }n=n-1;
        printf("The deleted element is  =%d",elem);
    }else  
        {
        printf("Invalid position\n");
    }
}