#include<stdio.h>
int odevn(int);

int main(){
    int x;
    printf("enter the number you want :");
    scanf("%d",&x);
    int c=odevn(x);
    if(c==1)printf("%d  is even",x);
    else printf("%d is odd",x);
    

    return 0;
}
int odevn(int n){
    if(n%2==0)return 1;
    else return 0;
}