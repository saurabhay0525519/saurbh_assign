//write a program to check a prime number
#include<stdio.h>
int primenumber(int );

int main(){
    int x;
    printf("enter the number : ");
    scanf("%d",&x);
    int c=primenumber(x);
    if(c==1)
    printf("prime number");
    else printf("not a prime number\n");

    return 0;
}
int primenumber(int n){

    for(int i=2;i<n;i++){
        if (n%i==0)
        return 0;
    }
    return 1;
}