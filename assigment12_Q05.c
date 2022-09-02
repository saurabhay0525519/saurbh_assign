 //Write recursive function to print first N even natural number 
 #include<stdio.h>
 int evnlno(int);

int main(){
    int x;
    printf("enter the number \n");
    scanf("%d",&x);
    printf("first %d even natural number is:",x);
    evnlno(2*x-2);
    return 0;
}
int evnlno(int n){
    if(n>=0){
        evnlno(n-2);
        printf(" %d ",n);
    }
}