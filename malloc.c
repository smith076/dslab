#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n,i;
    n=5;
    printf("Enter no .of elements: %d\n",n);

    //dynamically allocated memory using malloc
    ptr= (int *)malloc(n * sizeof(int));

    if(ptr==NULL){
        printf("Memory not allocated");
        exit(0);
    }
    else
    {
        printf("Memory succefully allocated with malloc \n");
        for(i=0;i<n;++i){
            ptr[i]=i+1;
        }
        for(i=0;i<n;++i){
            printf(" %d ",ptr[i]);
        }
    }
    return 0;
}