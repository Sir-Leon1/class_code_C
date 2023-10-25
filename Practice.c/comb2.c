#include <unistd.h>

int _putchar(char c);
int _putchar(char c)
{
    return(write(1, &c, 1));
}

int main()
{
    int num;
    int num2;

    for (num = 0; num < 10; num++)
    {
        for (num2 = num; num2 < 10; num2++)
        {
            _putchar(num + '0');
            _putchar(num2 + '0');

            _putchar(',');
            _putchar(' ');
        }
    }

    return (0);
}