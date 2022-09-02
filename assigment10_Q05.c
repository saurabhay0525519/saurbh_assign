//write a program to print first n odd natural number
#include<stdio.h>
void oddnl(int );

int main(){
    int x;
    printf("enter the number: ");
    scanf("%d",&x);
    oddnl(x);

    return 0;
}
void oddnl(int n){
    for(int i=1;i<=2*n-1;i++){
        printf("%d\n",i);
        i++;
        
    }
    
    
}