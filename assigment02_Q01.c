#include<stdio.h>

int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    if(n>0 && n<10){
        printf("%d",n);
    }
    else{
        printf("%d",n%10);
    }
    return 0;
}