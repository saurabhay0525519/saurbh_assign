//Write a progarm to calculate lcm of two number
#include <stdio.h>
int lcm(int, int);

int main()
{
    int x, y;
    printf("enter the first number: ");
    scanf("%d", &x);
    printf("enter the second number:");
    scanf("%d",&y);
    int c=lcm(x, y);
     printf("the lcm of %d and %d :%d\n",x,y,c);


    return 0;
}
int  lcm(int a, int b)
{
    int mul1, mul2, mul3, div1, div2;
    mul1 = 1;
    div1 = a;
    for (int i = 2; i <= a; i++)
    {
        if (div1 % i == 0)
        {
            div1 = div1 / i;
            mul1 = mul1 * i;
            i=1;
        }
        if (div1 == 1)
        {
            printf("the mul1 is :%d\n", mul1);
            break;
        }
    }

    mul2 = 1;
    div2 = b;
    for (int i = 2; i <= b; i++)
    {
        if (div2 % i == 0)
        {
            div2 = div2 / i;
            mul2 = mul2 * i;
            i=1;
        }
        if (div2 == 1)
        {
            printf("the mul2 is :%d\n", mul2);
            break;
        }
    }

    mul3 = mul1 * mul2;
    int count = 1;
    
    if (a < b)
    {
        for (int i = 2; i <= a; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                count = i;
            }
        }
        // printf("the lcm of %d and %d :%d\n",a,b, sum3 / count);
        return mul3/count;
    }

    if (a > b)
    {
        for (int i = 2; i <= b; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                count = i;
            }
        }
        // printf("the lcm of %d and %d is :%d\n",a,b, sum3 / count);
        return mul3/count;
    }

    if (a == b)
    {

        // printf("the lcm of %d and %d is :%d\n",a,b, sum3 / a);
        return mul3/a;
    }
}
