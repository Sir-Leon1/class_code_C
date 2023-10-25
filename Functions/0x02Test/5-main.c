#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

/**
 * print_sign - Prints the sign of a number
 * @e: The number.
 * 
 * Return: 1 if ve+, 0 if 0, -1 if -ve
*/
int print_sign(int e)
{
	if (e > 0)
		return (1);
	
	else if(e == 0)
		return (0);

	else
		return (-1);
}