#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

int _putchar(char c);
/**
 * _Putchar - Prints a character to output.
 * @c: The character to be otputed.
 * 
 * Return: 1 ON SUCCESS -1 ON ERROR AND errno is set appropriately
*/
int _putchar(char c)
{
    return (write(1, &c, 1));
}


int print_diagonal(int a);
int print_square(int n);
int print_triangle(int n);

#endif