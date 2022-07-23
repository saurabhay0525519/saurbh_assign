#include <stdio.h>


int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {

            if (j == 1 || j == i)
            {
                printf(" *");
            }
            else
                printf(" ");

            if (i == 5 && j==1)
            {
                for(int j=2;j<=5;j++){
                    printf(" *");
                }
                
            }
            if(i==5)
            break;
           
        }
        printf("\n\n");
    }
    return 0;
}