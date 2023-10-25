#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_square(2);
	print_square(10);
	print_square(0);
	return (0);
}

/**
 * print_square - Prints a square using hash
 * @n: Dimensions of the square
 * 
 * return: 0;
*/
int print_square(int n)
{

	int line, row;

	if (n <= 0)
	{
		_putchar('\n');
		return (0);
	}

	for (row = 0; row < n; row++)
	{
		for (line = 0; line < n; line++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
	_putchar('\n');

	return (0);
}