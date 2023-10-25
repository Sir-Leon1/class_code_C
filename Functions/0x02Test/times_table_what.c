#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_times_table(3);
	_putchar('\n');
	print_times_table(5);
	_putchar('\n');
	//print_times_table(98);
	//_putchar('\n');
	print_times_table(12);
	return (0);
}

/**
 * print_times_table - Prints the times table up to n.
 * @n: Where the table stops.
 * 
 * Return: Nothing
*/

void print_times_table(int n)
{
	int num, mul, prod, ones, tens, hunds;

	for (num = 0; num <= n; num++)
	{
		_putchar('0');

		for (mul = 1; mul <= n; mul++)
		{
			prod = num * mul;

			if (prod <= 9)
			{

				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar((prod % 10) + '0');
			}

			else if (prod > 9 && prod < 100)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}

			else if (prod > 99 && prod < 1000)
			{
				_putchar(' ');
				tens = ((prod / 10) % 10);
				ones = prod / 100;
				_putchar(ones + '0');
				_putchar(tens + '0');
				_putchar((prod % 10) + '0');
			}

			else if (prod > 999 && prod < 10000)
			{
				hunds = ((prod / 10) % 10);
				tens = ((prod / 100) % 10);
				ones = prod / 1000;
				_putchar((prod % 10) + '0');
			}
			
			_putchar(',');
			_putchar(' ');

		}

		_putchar('\n');
	}
}