#include<stdio.h>
int main(){
    int r;
    printf("enter the radius \n");
    scanf("%d",&r);
    float c=3.14*r*r;
    printf("the area of circle is %0.4f with radius %d \n",c,r);
    return 0;
}