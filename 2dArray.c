#include<stdio.h>
int main(){
    printf("ENTER KEY NUMBER\n");
    int key_number;
    scanf("%d",&key_number);
    int a[key_number][key_number][key_number];
    printf("Hello da\n");
    for(int i=0;i<=key_number;i++){
        for(int j=0;j<=key_number;j++){
            for (int k = 0;k<=key_number;k++){
                for(int l=0;l<=key_number;l++){
                    a[j][k][l]=i;
                }
            }
            
        }
    }
    int sum=0;
    for(int i;i<=key_number;i++){
        sum=sum+a[i][i][i];
    }
    printf("%d",sum);
    return 0;
}