#include <stdio.h>

int main()
{
    int a, b;
    printf("enter the two number\n");
    scanf("%d%d", &a, &b);
    if (a == b)
        printf("% is equal to %d\n", a, b);
    if (a > b)
        printf("% is greater than %d\n", a, b);
    if (a < b)
        printf("%d is smaller than %d ", a, b);

    return 0;
}