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

    printf("a is %d\nb is %d\nc is %d\nd is %d", a, b, c, d);

    e = a % b;
    f = b % c;
    g = f % d;
    h =  g / e;

    printf("\ne is %d\nf is %d\ng is %d\nh is %d\n ", e, f, g, h);
    return 0;
}
