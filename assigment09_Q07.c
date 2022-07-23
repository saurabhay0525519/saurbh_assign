#include<stdio.h>

int main(){
    int x;
    printf("enter the unit\n ");
    scanf("%d",&x);
    switch(x){

        case 0 ... 50:
        printf("%f",x*0.50);
        break;
        case 51 ... 150:
        printf("%f",x*0.75);
        break;
        case 151 ... 250:
        printf("%f",x*1.20);
        break;
        default:
        printf("%f",x*1.50);
        
    }
    
    return 0;
}