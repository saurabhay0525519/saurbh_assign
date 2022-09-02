//write a program to print first n natural number using function
#include<stdio.h>
void nlnmb(int);

int main(){
    int x;
    printf("enter the number :");
    scanf("%d",&x);
    printf("the first %d natural number are: \n",x);
    nlnmb(x);

    return 0;
}
void nlnmb(int n){
    
    for( int i=1;i<=n;i++){
        printf("%d",i);
        printf(" \n");
    }
   
}