//Write recursive program to print N natural number in reverse order
#include<stdio.h>
void printN(int);//function declaration

int main(){
    int x;
    printf("enter the number\n");
    scanf("%d",&x);
    printN(x);//function call


    return 0;
}
void printN(int n){//function definition
    if(n>0){
    printf(" %d ",n);
    printN(n-1);

    }

}