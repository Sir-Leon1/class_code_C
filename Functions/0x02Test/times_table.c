#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	times_table();
	return (0);
}

/**
 * times_table - Prints the 9 times table starting from 0
 * 
 * Return: Nothing.
*/
void times_table()
{
	int num, mul, prod;

	for (num = 0; num < 10; num++)
	{
		_putchar('0');
		for (mul = 1; mul < 10; mul++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mul;

			if (prod <= 9)
			{
				_putchar(' ');
			}
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}

		_putchar('\n');
	}
}
