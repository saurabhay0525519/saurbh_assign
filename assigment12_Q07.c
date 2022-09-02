//print squrare of first natural number using recursion
#include<stdio.h>
void sqr(int);

int main(){
    int x;
    printf("enter the number \n");
    scanf("%d",&x);
    printf("square of first %d natural number is:",x);
    sqr(x);
    return 0;
}
void sqr(int n){
    if(n>0){
        sqr(n-1);
        printf(" %d ",n*n);
    }
}