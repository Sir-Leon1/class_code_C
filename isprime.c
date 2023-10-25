#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter a number:");
    scanf("%d", &n);

    if (n == 2)
    {
        printf("\nThe number entered\n: %d :\nis a prime number");
        return (0);
    }

    for (i = 2; i < n; i++)
    {
        if (n % i == 0 )
        {
            printf("\nThe number entered\n: %d :\nis NOT prime as is divisible by %d", n, i);

            return (0);
        }
    }

    printf("prime number");

    return (0);
}