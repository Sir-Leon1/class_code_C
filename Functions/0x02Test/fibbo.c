#include <stdio.h>
#include <stdint.h>
#include "main.h"

int main()
{
    uint64_t num = 1, num2 = 2, limt = 1, nxt;
    
    printf("%llu", num);
    _putchar(',');
    _putchar(' ');
    printf("%llu", num2);

    while (limt <= 48)
    {
        _putchar(',');
        _putchar(' ');
        nxt = num + num2;
        printf("%llu", nxt);

        num = num2;
        num2 = nxt;
        limt++;
    }
}