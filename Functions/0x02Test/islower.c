#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

/**
 * _islower - Checks if a character is lowercase.
 * 
 * @c: The character to be checked.
 * Return: 1 True, 0 Otherwise.
*/
int _islower(char c)
{
	char letr;

	for (letr = 'a'; letr <= 'z'; letr++)
	{
		if (c == letr)
			return (1);
	}

	return (0);
}
