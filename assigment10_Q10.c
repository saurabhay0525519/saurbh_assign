#include <stdio.h>
void primefactor(int);

int main()
{
    int x;
    printf("enter the number\n");
        scanf("%d", &x);
     printf("the prime factor are:");
    primefactor(x);
    // printf("the prime factor of %d is %d", a, c);

    return 0;
}
void primefactor(n)
{
    int d;
    if (n == 1)
        return;
    int a = 2;
    while (a >0)
    {
        if (n % a == 0)
        {
             d = n/a;
            printf("%d , ", a);
            break;
        }
        a++;
    }
     primefactor(d);
}