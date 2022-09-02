//Write recursive function to print N odd natural
#include<stdio.h>
void oddnlno(int);//function declaration

int main(){
    int x;
    printf("enter the number \n");
    scanf("%d",&x);
    printf("first %d odd natural no is:",x);
    oddnlno(2*x-1);//function call

    return 0;
}
void oddnlno(int n){//function declaration
    if(n>0){
    oddnlno(n-2);
    printf(" %d ",n);

    }
}