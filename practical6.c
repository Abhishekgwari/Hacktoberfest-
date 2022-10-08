// roots of quadratic equation using nesting of if else
#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int a, b, c, d;
    int root1, root2;
    printf("Enter the cofficent (a,b,c)");
    scanf("%d%d%d", &a, &b, &c);
    d = (b * b) - (4 * a * c);
    if (d > 0)
    {
        root1 = ((-b + sqrt(d)) / (2 * a));
        root2 = ((-b - sqrt(d)) / (2 * a));
        printf("roots are %d and %d\n:", root1, root2);
    }
    else if (d == 0)
    {
        root1 = ((-b + sqrt(d)) / (2 * a));
        printf("\nroots are %d and %d", root1, root2);
    }
    else
    {
        printf("\nimaginary roots");
    }
    return 0;
}
