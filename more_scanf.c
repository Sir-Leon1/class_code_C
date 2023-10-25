#include <stdio.h>

int main()
{
    int n;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("The number %d is positive", n);
    }
    else if (n == 0)
    {
        printf("The number %d is zero", n);
    }
    else
    {
        printf("The number %d is negative\n", n);
    }

    return (0);
}