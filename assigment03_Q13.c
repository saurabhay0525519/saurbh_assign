#include<stdio.h>

int main(){
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    if(a%3==0 && a%2==0)printf("divisible by 3 and 2");
    else printf("not divisible by 3 and 2");
   
    return 0;
}