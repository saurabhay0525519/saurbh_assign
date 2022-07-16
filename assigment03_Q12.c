#include <stdio.h>

int main()
{
    char a;
    printf("enter the character \n");
    scanf("%c", &a);
    printf("entered character is: %c\n",a);
    
    
    if (a >= 'A' && a <= 'Z')
        printf("uppercase\n");
    else
        printf("lowercase");

    return 0;
}