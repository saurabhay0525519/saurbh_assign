#include<stdio.h>
void hcf(int,int);

int main(){
    int x,y;
    printf("enter the number \n");
    scanf("%d%d",&x,&y);
    hcf(x,y);
   
    return 0;
}
void hcf(int a,int b){
    int HCF=1,i;
    int div1=a,div2=b;
    if(a>b){
        div1=b;
        div2=a;
    }
    int c=div1;
    for(i=2;i<=c;i++){
        if(div1%i==0){
            if(div2%i==0){
                HCF=HCF*i;
            }
            div1=div1/i;
            i=1;
            if(div1==1)
            break;
        }
    }
    if(HCF==1)
    printf("the hcf of %d and %d is :%d",a,b,1);
    else{
        printf("the hcf of %d and %d is :%d",a,b,HCF);
    }
}