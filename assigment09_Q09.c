#include<stdio.h>

int main(){
    int x;
    printf("enter the number \n");
    scanf("%d",&x);
    switch(x>0){

        case 1:
        printf("%d",-1*x);

    break;
    }
    switch(x<0){
        case 1:
        printf("%d",-1*x);
    }
    
    return 0;
}