#include<stdio.h>

int main(){
    int x;
    printf("enter the day of the week \n");
    scanf("%d",&x);
    switch(x){
        case 1:
        printf("hello monday");
        break;
        case 2:
        printf("hello tuesday");
        break;
        case 3:
        printf("hello wednesday");
        break;
        case 4:
        printf("hello thursday");
        break;
        case 5:
        printf("hello friday");
        break;
        case 6:
        printf("bye saturday");
        break;
        case 7:
        printf("sunny day sunday");
        break;

    }

    return  0;

}