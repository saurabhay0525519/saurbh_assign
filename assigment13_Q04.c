#include<stdio.h>
int sum(int);

int main(){
    int x;
    printf("enter the number \n");
    scanf("%d",&x);
    int c=sum(x);
    printf("the sum of %d natural term is:%d",x,c);


    return 0;
}
int sum(int n){
    
    if(n>0)
    {
        return n+sum(n-1);
    }
}