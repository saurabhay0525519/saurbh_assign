//Write recursive function program to print first N natural number
#include<stdio.h>
void printN(int);

int main(){
    int x;
    printf("enter the number\n");
    scanf("%d",&x);
    printN(x);


    return 0;
}
void printN(int n){
    if(n>0){
    printN(n-1);
    printf(" %d ",n);

    }

}