#include <stdio.h>
int main()
{
    float Area = 0, Length = 0, Width = 0;

    Length = 15;
    Width = 7.8;
    Area = Length * Width;
    printf("The area of the rectangle is %f (square units)", Area);
    return 0;
}