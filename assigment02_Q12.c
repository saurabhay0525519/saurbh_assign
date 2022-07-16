#include<stdio.h>

int main(){
    float inr;
    printf("enter the amount in rupee \n");
    scanf("%f",&inr);
    printf("%f",inr);
    float dollar=76.23;
    float d= inr/dollar;
    printf("\n");
    printf("  %0.2f rupees is equal to : $%0.0f dollar",inr,d);
    
    return 0;
}