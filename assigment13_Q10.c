#include<stdio.h>
int powr(int);
int count=0;

int main(){
    int x;
    printf("enter the number\n");
    scanf("%d",&x);
    int c=powr(x);
    printf("the power of %d is :%d",x,c);

    return 0;
}
int powr(int n){
    
    count++;
    if(count==3)return 1;
    return n*powr(n);
    
}