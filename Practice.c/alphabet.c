#include <unistd.h>
#include <stdio.h>

int _putchar(char c);
/**
 * _putchar - Writes single character to stdout
 * @c: The character to be written.
 * 
 * Return: Returns 1 on success -1 on failure and errno is set.
 * 
*/
int _putchar(char c)
{
    return (write(1, &c, 1));
}

int main()
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
        _putchar(letter);
    _putchar('\n');

    return (0);
}