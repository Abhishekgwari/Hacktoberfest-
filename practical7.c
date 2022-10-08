// given no is divisible by 7 or not if not print nearest no divisible by 7
#include <stdio.h>
int main()
{
    int num, rem, newnum;
    printf("enter the number:");
    scanf("%d", &num);
    rem = num % 7;
    if (rem == 0)
    {
        printf("yes the number is divisible by 7");
    }
    else
    {
        if (rem > 3)
        {
            newnum = num - rem + 7;
        }
        else
        {
            newnum = num - rem;
        }
        printf("no the nerest number is %d", newnum);
    }
    return 0;
}