#include <stdio.h>
int main()
{
    int a, b,temp;
    printf("enter the number\n");
    scanf("%d%d", &a, &b);

    printf(" the number are :%d %d\n", a, b);
    
    temp = a;
    a = b;
    b = temp;
    printf("the reversed number are:%d %d\n", a, b);

    return 0;
}