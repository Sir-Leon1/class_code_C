#include "main.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = add(-89, 9);
	printf("%d\n", n);
	return (0);
}

/**
 * add - Adds two numbers.
 * 
 * Return: The sum of two numbers
*/
int add(int a, int b)
{
	return(a + b);
}
