#include<stdio.h>

int main(){
    int n,a;
    printf("enter the number \n");
    scanf("%d ",&n);
    if(n<0){
        n=n*(-1);
    }
    a=n;
    int count=0;
    while(a>0){
        a=a/10;
        count++;
        
    }
    
    if(count>0)
    printf("no. of element in %d is %d ",n,count);
    else
    printf("no. of element in %d is %d ",n,1);

    return 0;
}