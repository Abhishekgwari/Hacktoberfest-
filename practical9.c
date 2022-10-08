// factorial of a number
#include <stdio.h>
int main()
{
    int num, fact;
    printf("enter the number:");
    fact = 1;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("%d", fact);
    return 0;
}