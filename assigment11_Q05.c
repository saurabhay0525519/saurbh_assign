//write a program to print first n prime number 
#include<stdio.h>
void count_prm(int);

int main(){
    int x;
    printf("enter the number \n");
    scanf("%d",&x);
    count_prm(x);

    return 0;
}
void count_prm(int a){
    int j=3,i;
    int count=0;
    while(j>2)
    {
        for( i=2;i<=j/2;i++)
        {
            if(j%i==0)
            break;
        }
        if(i==j/2+1)
        {
            printf("%d ",j);
             count++;
        }
        if(count>=a)
        break;
        j++;
    }
}