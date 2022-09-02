#include<stdio.h>
int sumdigit(int);

int main(){
    int x;
    printf("enter the number \n");
    scanf("%d",&x);
    int c=sumdigit(x);
    printf("the sum of digit of %d is:%d ",x,c);

    return 0;
}
int sumdigit(int n){
    if(n==0)return 0;
    // int c=n%10;
    return n%10+sumdigit(n/10);
}