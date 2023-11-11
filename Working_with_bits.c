#include <stdio.h>

int main()
{
    printf("Welcome to the bitwise world");

    int a = 60, b = 13;

    printf("\nAND a & b = %d", a&b);
    printf("\nOR A | b = %d", a|b);
    printf("\nXOR a ^ b = %d", a^b);
    printf("\nBinry left shift a << 2 = %d", a << 2);
    printf("\nBinary right shift a >> 2 = %d", a >> 2);
    printf("\nOnes complement ~a = %d", ~a);

    return (0);

}