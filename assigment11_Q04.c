//write a program to print next prime number
#include <stdio.h>
void nxt_prm(int);

int main()
{
    int x;
    printf("enter the number");;
    scanf("%d", &x);
    //!!!!!!!!!!!!!!!"IMPORTANT"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//when you will give 'space' after %d in scanf then you have to give two input to get result 
    nxt_prm(x);

    return 0;
}
void nxt_prm(int a)
{       
    while(a==0||a==1){ 
        printf("the next prime number is 3");
        break;
        
    }
    int j=a+1,i;
    while (j >2)
    {
        for (i = 2; i <= j/2; i++)
        {
            if (j % i == 0)
                break;
        }
        
        if (i == j/2+1)
        {
            
            printf("the next prime number is:%d", j);
            break;
        }
        
       
        j++;
    }
}