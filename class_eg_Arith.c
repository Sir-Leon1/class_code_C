#include <stdio.h>

int main()
{
    int a = 10;
    int b = 15;
    int c = 12;
    int d = 20;
    int e, f, g, h;

    a++;
    b++;
    c = c - 10;
    d = d - c;

    printf("a is %d, b is %d, c is %d, d is %d", a, b, c, d);

    e = a % b;
    f = b % c;
    g = f % d;
    h = g / e;

    printf("\ne is %d, f is %d, g is %d, h is %d", e, f, g, h);
    return 0;
}