#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0
 */
int main(void)
{
	print_diagonal(0);
	print_diagonal(2);
	print_diagonal(20);
	print_diagonal(-4);
	return (0);
}

/**
 * print_diagonal - Prints a diagonal line on terminal.
 * @a: The length of the line.
 * 
 * Return: Nothing.
*/
int print_diagonal(int a)
{
	int len = a, pos  = 0, pos2 = 0;

	if (a < 1)
	{
		_putchar('\n');
		return (0);
	}

	while (len)
	{
		if (pos > 0)
		{
			for (pos = pos2; pos > 0; pos--)
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');

		pos = pos2 + 1;
		pos2 = pos;
		len--;

	}

	return (0);
}