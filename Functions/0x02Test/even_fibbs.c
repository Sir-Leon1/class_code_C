#include <stdio.h>
#include <stdint.h>
#include "main.h"

int main()
{
    uint64_t num = 0, num2 = 1, nxt = 0, sum = 0;

    while (nxt <= 4000000)
    {
        nxt = num + num2;
        num = num2;
        num2 = nxt;

        if (nxt % 2 == 0)
        {
            printf(" ,%llu", nxt);
            sum += nxt;
        }


    }

    printf("Sum of even fibbs is %llu", sum);

    return (0);
}