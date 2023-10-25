#include <stdio.h>
#define pie 3.142

int main()
{
    float radius = 0,diameter = 13.8, height = 12.1, volume = 0;
    radius = diameter / 2;

    volume = pie * radius * radius * height / 3;
    printf("The volume of the cone is %f (cubic units)", volume);
    return 0;
}