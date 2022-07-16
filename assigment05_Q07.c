#include<stdio.h>

int main(){
     int n;
    printf("enter the number \n");
    scanf("%d",&n);

    for(int i=n*2-2;i>=0;i--){
        printf("%d\n",i);
        i--;
    }

    return 0;
}