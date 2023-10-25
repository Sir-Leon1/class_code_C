#include <unistd.h>

int _putchar(char c);
int _putchar(char c)
{
    return(write(1, &c, 1));
}

int main()
{
    int num;
    char letr;

    for (num = 0; num < 10; num++)
        _putchar((num % 10) + '0');
    
    for (letr = 'a'; letr <= 'f'; letr++)
        _putchar(letr);
    
    _putchar('\n');
    return (0);
}