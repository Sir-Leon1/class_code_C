#include "main.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}

/**
 * _abs - Prints the absolute value.
 * @f: The number to be checked.
 * 
 * Return: 1 on success, 0 on failure.
*/
int _abs(int f)
{
	if (f < 0)
	{
		return ((-(f)));
	}

	else if (f == 0)
	{

		return (0);
	}

	else
	{
		return (f);
	}

	_putchar('\n');
}