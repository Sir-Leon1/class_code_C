#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_triangle(2);
	//print_triangle(10);
	print_triangle(1);
	print_triangle(0);
	return (0);
}


int print_triangle(int n)
{
	int line, row;

	if (n <= 0)
	{
		_putchar('\n');
		return (0);
	}

	for (line = 1; line < n; line++)
	{
		for (row = 0; row < n; row++)
		{
			_putchar('#');
			_putchar('\n');
		}
	}

	_putchar('\n');
	return (0);
}