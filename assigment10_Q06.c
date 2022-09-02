//write a program to calculate factorial using function
#include<stdio.h>
int facto(int);

int main(){
    int x;
    printf("enter the number \n");
    scanf("%d",&x);
    int c=facto(x);
    printf("the factorial of %d is : %d",x,c);

    return 0;
}
int facto(int n){
    int j=1;
    for(int i=1;i<=n;i++){
        j=j*i;
    }
    return j;
}