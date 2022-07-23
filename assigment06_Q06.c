#include<stdio.h>

int main(){
    int n;
    printf("enter the number \n");
    scanf("%d",&n);
    int facto=1;
    for(int i=1;i<=n;i++){
         facto = facto*i;
    }
    printf("the factorial of %d is %d",n,facto);

    return 0;
}