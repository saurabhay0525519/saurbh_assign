#include<stdio.h>

int main(){
     int n;
    printf("enter the number \n");
    scanf("%d",&n);

    for(int i=n*2-1;i>=1;i--){
        printf("%d\n",i);
        i--;
    }

    return 0;
}