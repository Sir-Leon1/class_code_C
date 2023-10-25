#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
int _putchar(char c)
{
    return (write(1, &c, 1));
}

int main()
{
    int num, num2, num3;

    for (num = 0; num < 10; num++)
    {
        for (num2 = num; num2 < 10; num2++)
        {
            /*if (num2 == 9)
                break;
            */
            for (num3 = num2; num3 < 10; num3++)
            {
                _putchar(num + '0');
                _putchar(num2 + '0');
                _putchar(num3 + '0');

                _putchar(',');
                _putchar(' ');
            }
        }
    }

    return (0);
}