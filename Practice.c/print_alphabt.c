#include <unistd.h>

int _putchar(char c);
int _putchar(char c)
{
    return(write(1, &c, 1));
}

int main()
{
    char letters;

    for (letters = 'a'; letters <= 'z'; letters++)
    {
        if (letters != 'q' && letters != 'e')
            _putchar(letters);
    }
    _putchar('\n');

    return (0);
}