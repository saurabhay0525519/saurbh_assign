#include<stdio.h>

int main(){
     int n;
    printf("enter the number \n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        printf("the cube of %d = %d\n",i,i*i*i);
       
    }

    return 0;
}