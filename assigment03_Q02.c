#include<stdio.h>

int main(){
    int z;
    printf("enter the number\n");
    scanf("%d",&z);
    if(z%5==0)printf("divisible by 5");
    else printf("not divisible by 5");
   
    return 0;
}