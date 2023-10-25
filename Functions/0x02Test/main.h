#include <unistd.h>
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
/**
 * _putchar - Writes to stdout
 * @c: The character to be written to the output.
 * 
 * Return: 1 on success -1 error errno is set.
*/
int _putchar(char c)
{
    return (write(1, &c, 1));
}

void print_alphabet();
void print_alphabet_x10();
int _islower(char C);
int _isalpha(char d);
int print_sign(int e);
int _abs(int f);
int print_last_digit(int g);
void jack_bauer();
void times_table();
int add(int a, int b);
void print_to_98(int n);
void print_times_table(int n);

#endif