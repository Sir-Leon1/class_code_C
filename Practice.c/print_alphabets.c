#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
int _putchar(char c)
{
    return (write(1, &c, 1));
}

int main()
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
        _putchar(letter);
    for (letter = 'A'; letter <= 'Z'; letter++)
        _putchar(letter);
    _putchar('\n');

    return (0);
}