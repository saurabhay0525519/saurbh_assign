#include<stdio.h>
void facto_sum(int);

int main(){
    int x;
    printf("enter the number \n");
    scanf("%d",&x);
    facto_sum(x);
   
return 0;
}
void facto_sum(int a)
{
    int i,j,div, sum=0;
    for(j=a;j>=1;j--){
        int facto= 1;
        for(i=1;i<=j;i++){
            facto =facto*i;

            if(i==j){
                div=facto/i;
                sum=sum+div;
            }
        }
    }
    printf("the sum of 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 expression is:%d",sum);
}