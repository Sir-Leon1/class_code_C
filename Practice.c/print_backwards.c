#include <unistd.h>
#include <stdio.h>

int _putchar(char c);
int _putchar(char c)
{
    return(write(1, &c, 1));
}

int main()
{
    int letr;

    for (letr = 122; letr >= 97; letr--)
        _putchar(letr);
    _putchar('\n');

    return (0);
}