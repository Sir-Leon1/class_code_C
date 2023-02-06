#include <stdio.h>
#define pie 3.142

int main()
{
    float A = 0, d = 17.49, r = 0;
    /*A is area
    d is diameter
    r is radius*/
    r = d / 2;
    A = pie * r * r;
    printf("The area of the circle is %f (square units)", A);
    return 0;

}