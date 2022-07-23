#include<stdio.h>

int main(){
    for(int i=5;i>=1;i--){
        for(int j=1;j<=10;j++){
            if((j>=1 && j<=i) || (j>=11-i && j<=10))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}