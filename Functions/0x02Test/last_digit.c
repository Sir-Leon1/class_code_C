#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}

/**
 * print_last_digit - Prints the last digit of a number
 * @g: The number to be checked.
 * 
 * Return: The last digit.
 * 
*/
int print_last_digit(int g)
{
	if (g < 0)
		return ((-(g)) % 10);
	
	return (g % 10);
}
