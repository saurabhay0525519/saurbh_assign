//print reverse number
#include<stdio.h>
int revN(int);

int main(){
    int x;
    printf("enter the number\n");
    scanf("%d",&x);
    printf("the reverse of %d is :",x);
    revN(x);


    return 0;
}
int revN(int n){
    if(n>0){
        printf("%d",n%10);
        revN(n/10);
    }
}