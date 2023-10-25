#include <stdio.h>
#include "main.h"

int main()
{
    int num;

    for (num = 1; num <= 100; num++)
    {
        if ((num % 3 == 0) && (num % 5 == 0))
            printf("FizzBuzz");
        else if (num % 3 == 0)
            printf("Fizz");
        else if (num % 5 == 0)
            printf("Buzz");
        else
            printf("%d", num);
        printf(" ");
    }

    return (0);
}