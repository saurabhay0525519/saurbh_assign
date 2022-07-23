#include<stdio.h>

int main(){
    int n,i;
    printf("enter the number\n");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0)
        printf("not a prime number");
        break;
    }
    if(i==n)
    printf("prime number");

    return 0;
}