#include<stdio.h>
float areacircle(int);

int main(){
    int n;
    printf("enter the radius\n");
    scanf("%d",&n);
    printf("the area of circle is:%0.2f",areacircle(n));
    return 0;
}
float areacircle(int n){
    return 3.14*n*n;
}