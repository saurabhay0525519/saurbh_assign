#include<stdio.h>

int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=2;
    }
    printf("%d",sum);

    return 0;
}