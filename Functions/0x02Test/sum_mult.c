#include <stdio.h>

/**
 * main - Prints sum of multiples of 5 or 3 below 1024
 * 
 * Return: Nothing.
*/
int main()
{
    int num, sum = 0;
    for (num = 0; num < 1024; num++)
    {
        if ((num % 3 == 0) || (num % 5 == 0))
        {
            sum += num;
        }
    }

    printf("%d\n", sum);
    return(0);
}