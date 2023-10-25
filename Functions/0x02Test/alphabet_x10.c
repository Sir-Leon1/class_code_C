#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10times.
 * 
 * Return: Nothing.
*/
void print_alphabet_x10()
{
	char letr;
	int times = 0;

	for (times = 0; times < 10; times++)
	{
		for (letr = 'a'; letr <= 'z'; letr++)
		{
			_putchar(letr);
		}
		_putchar('\n');

	}

	_putchar('\n');
}
