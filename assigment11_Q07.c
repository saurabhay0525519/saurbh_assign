// WAP to print first N fibonacci series
#include <stdio.h>
void n_fibo(int);

int main()
{
    int x;
    printf("enter the number \n");
    scanf("%d", &x);
    printf("the first %d fibonacci term is:",x);
    n_fibo(x);
    

    return 0;
}
void n_fibo(int n)
{
    if (n == 1)
        printf("%d, ", 0);
    if (n == 2)
    {
        printf("%d, ", 0);
        printf("%d, ", 1);
    }
    if (n == 3)
    {
        printf("%d, ", 0);
        printf("%d, ", 1);
        printf("%d, ", 2);
    }

    if (n > 3)
    {
        printf("%d, ", 0);
        printf("%d, ", 1);
        int i = 0, j = 1, k;
        k = i + j;
        printf("%d ,", k);
        int count = 3;
        while (n > 3)
        {

            int temp1, temp2;
            temp1 = i;
            i = j;
            j = temp1;

            temp2 = j;
            j = k;
            // k=temp2;

            // temp2=k; no need because temp2 value get updated automatically

            count++;
            k = i + j;
            printf("%d, ", k);
            if (count == n)
                break;
        }
    }
}