#include<stdio.h>
int count (int);
int p=0;
int main(){
    int x;
    printf("enter the number you want \n");
    scanf("%d",&x);
    
    printf("no of digit in %d is :%d",x,count(x));

    return 0;
}
int count(int n){
    if(n>0){
        count(n/10);
        p++;
    }
}