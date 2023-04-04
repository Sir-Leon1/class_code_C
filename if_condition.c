#include <stdio.h>

int main()
{
    int n, count = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    while ((n < 1 || n >= 1000000) && (count < 3))
    {
        printf("Enter a positive number between(1 and 999,999) :");
        scanf("%d", &n);

        count++;
    }

    if (count == 3)
    {
        printf(":: You have run out of attempts ::");
        return (0);
    }

    if (n < 100)
        printf("%d is less than 100", n);
    else if (n > 101 && n < 1000 )
        printf("%d is between 101 and 1,000", n);
    else if (n > 1001 && n < 10000 )
        printf("%d is between 1,001 and 10,000", n);
    else if (n > 10001 && n < 100000 )
        printf("%d is between 10,001 and 100,000", n);
    else if (n > 100001 && n < 1000000 )
        printf("%d is betweem 100,001 and 1,000,000", n);

    return (0);
}