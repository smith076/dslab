#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,sum=0;
    //int n,i;
    int n=5;
    printf("Enter no .of elements: %d\n",n);

    ptr= (int *)calloc(n , sizeof(int));

    if(ptr==NULL){
        printf("Memory not allocated");
        exit(0);
    }else{
        printf("calculating sum of first 10 terms\n");
        for(int i=0;i<10;++i){
            *(ptr+i)=i;
            sum+=*(ptr+i);
        }
    printf("sum=%d",sum);
    free(ptr);
    }
    return 0;
}

