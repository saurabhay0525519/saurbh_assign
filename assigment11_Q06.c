//write a program to print primenumber between two number
#include <stdio.h>
void prim_bw_tw_num(int, int);

int main()
{
    int x , y ;
    printf("enter the two number\n ");
    scanf("%d%d", &x, &y);
    printf("the prime number between %d and %d are:",x,y);
    prim_bw_tw_num(x, y);

    return 0;
}
void prim_bw_tw_num(int a, int b)
{
    int i;
    for (int j = a + 1; j < b; j++)
    {
        for ( i = 2; i <= j - 1; i++)
        {
            if (j % i == 0)
                break;
        }
        if(j==2) continue;
        if (j == i)
        {
            printf("%d ", j);
        }
    }
}