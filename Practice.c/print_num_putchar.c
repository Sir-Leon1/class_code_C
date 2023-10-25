#include <unistd.h>
#include <stdio.h>

int _putchar(char c);
int _putchar(char c)
{
    return (write(1, &c, 1));
}

int main()
{
    int num;

    for(num = 0; num <= 9; num++)
        _putchar('0' + num);
    putchar('\n');

    return (0);
}