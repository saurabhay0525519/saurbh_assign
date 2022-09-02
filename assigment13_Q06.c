#include<stdio.h>
int facto(int);

int main(){
    int x;
    printf("enter the number \n");
    scanf("%d",&x);
    int d=facto(x);
    printf("the factorial of %d is :%d",x,d);

    return 0;
}
int facto(int n){
    if(n==0||n==1)return 1;
    return n*facto(n-1);
}