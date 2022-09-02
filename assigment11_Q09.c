//write a program to print squrare of any number
#include<stdio.h>
int sqr(int);

int main(){
    int x;
    printf("enter the number \n");
    scanf("%d",&x);
    int c=sqr(x);
    printf("the square of %d is : %d",x,c);

    return 0;
}
int sqr(int n){
    return n*n;
}