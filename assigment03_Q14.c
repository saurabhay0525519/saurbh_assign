#include<stdio.h>

int main(){
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    if(a%7==0 || a%3==0)printf("divisible by 7 or 3");
    else printf("not divisible by 7 or 3");
   
    return 0;
}