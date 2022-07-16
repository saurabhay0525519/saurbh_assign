#include<stdio.h>

int main(){
     int n;
    printf("enter the number \n");
    scanf("%d",&n);

    for(int i=0;i<=n*2-2;i++){
        printf("%d\n",i);
        i++;
    }

    return 0;
}