#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}


/**
 * _isalpha - Checks if an alphabet.
 * 
 * @d: The character to be checked.
 * 
 * Return: 1 if alpha, 0 otherwise
*/
int _isalpha(char d)
{
	char letr1, letr2;

	for (letr1 = 'a'; letr1 <= 'z'; letr1++)
	{
		if (d == letr1)
			return (1);

		for (letr2 = 'A'; letr2 <= 'Z'; letr2++)
		{
			if (d == letr2)
				return (1);
		}
	}

	return (0);

}