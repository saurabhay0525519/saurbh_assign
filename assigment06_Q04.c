#include<stdio.h>

int main(){
    int n;
    printf("enter the number \n");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i*i;
    }
    printf("the sum of %d natural number is:%d ",n,sum);

    return 0;
}