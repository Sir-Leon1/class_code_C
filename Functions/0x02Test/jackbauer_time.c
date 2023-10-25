#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	jack_bauer();
	return (0);
}

void jack_bauer()
{
	int num1, num2, num3, num4;

	for (num1 = 0; num1 < 24; num1++)
	{
		for (num2 = 0; num2 < 60; num2++)
		{
			_putchar((num1 / 10) + '0');
			_putchar((num1 % 10) + '0');

			_putchar(' ');

			_putchar((num2 / 10) + '0');
			_putchar((num2 % 10) + '0');

			_putchar(',');
			_putchar(' ');
		}
	}
}
