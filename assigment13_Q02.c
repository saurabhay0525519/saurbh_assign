#include<stdio.h>
int sum_oddnlno(int);
int main(){
    int x;
    printf("enter the number \n");
    scanf("%d",&x);
    int c=sum_oddnlno(2*x-1);
    printf("the sum of first %d odd natural is :%d",x,c);

    return 0;
}
int sum_oddnlno(int n){
    if(n==1)
    return 1;
    return n+sum_oddnlno(n-2);
}