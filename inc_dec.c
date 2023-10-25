#include <stdio.h>
 int main ()
 {
    int a = 10, b = 15, c = 12, d = 20;
    int e, f , g , h;

    a++;
    a++;
    b--;
    b--;

    printf("Value of a is %d\n", a);
    printf("The value of b is %d\n", b);

    c++;
    d--;
    a++;
    e = a + b;
    f = d + e + b;

    printf("a is %d\nb is %d\nc is %d\nd is %d\ne is %d\nf is %d", a, b, c, d, e, f);

    f = f * f;
    g = f + e;
    g++;
    f--;
    b++;
    h = f + g;

    printf("\nf is %d\ng is %d\nh is %d", f, g, h);

    a = h;
    b = g;
    h = a;

    printf("\na is %d\nb is %d\nh is %d\n", a, b, h);
    return 0;
 }