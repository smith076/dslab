#include<stdio.h>
int main(){
    char a[10];
    char *address;
    address= &a[3];
    printf("%c",address);
}