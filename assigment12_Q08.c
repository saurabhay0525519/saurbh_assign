//binary of given decimal number
#include<stdio.h>
int binaryN(int);

int main(){
    int x;
    printf("enter the number \n");
    scanf("%d",&x);
    binaryN(x);


    return 0;
}
int binaryN(int n){
    if(n>0){
        binaryN(n/2);
        printf("%d",n%2);
    }
}