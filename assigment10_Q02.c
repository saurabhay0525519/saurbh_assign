#include<stdio.h>
float simtrst(int,int,int);

int main(){
    float p,r,t;
    printf("enter the principal : ");
    scanf("%f",&p);
    printf("enter the rate : ");
    scanf("%f",&r);
    printf("enter the time : ");
    scanf("%f",&t);
    float c=simtrst(p,r/100,t);
    printf("the simple interst of %0.1f principal,%0.1f %% rate,%0.1f year time is :%0.2f",p,r/100,t,c);

    return 0;
}
float simtrst(int a,int b,int c){
    return a*b*c/100;
}