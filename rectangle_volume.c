#include <stdio.h>

int main()
{
    float Volume = 0, Length = 0,Height = 0, Width = 0;

    Length = 15;
    Width = 7.8;
    Height = 34.7;
    Volume = Length * Width * Height;

    printf("Volume of the rectangle is %f (cubic units)", Volume);
    return 0;


}