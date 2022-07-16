#include<stdio.h>

int main(){
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    printf("%d\n",a);
    if(a%2==0){
        printf("the %d number is even",a);
    }
    else{
        printf("the %d number is odd ",a);
    }
   
    return 0;
}