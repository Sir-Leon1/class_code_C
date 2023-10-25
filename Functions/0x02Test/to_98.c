#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_to_98(0);
	print_to_98(98);
	print_to_98(111);
	print_to_98(81);
	print_to_98(-10);
	return (0);
}

/**
 * print_to_98 - Prints from n to 98
 * @n: Where to start.
 * 
 * Return: nothing.
*/
void print_to_98(int n)
{
	int i;

	if (n < 1)
		n = 1;
	else if (n > 98)
		_putchar('~');

	for (i = n; i < 99; i++)
	{
		if (i <= 9)
			_putchar(' ');
		else
			_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');

		_putchar(',');
		_putchar(' ');
	}

	_putchar('\n');
}