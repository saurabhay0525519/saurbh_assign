//OM SHREE GANESHAY NAMAH
#include<stdio.h>
int fib(int );

int main(){
    int x;
    printf("enter the number you want \n");
    scanf("%d",&x);
    fib(x);
    printf("the %d term of fibnocci is %d",x,fib(x));

    return 0;
}
int fib(int n){
    if(n==1||n==0)return 1;
    int c=return fib(n-1)+fib(n-2);
    printf("%d",c);
} 