#include <stdio.h>
int main()
{
    float length, width, height, to_m = 39.37;
    int bricks;
    float len = 4, wid = 9, heigh = 6, volume1, vol_of_brick;

    printf("Input the following data\n(in metres):\nLength: ");
    scanf("%f", &length);
    printf("Width: ");
    scanf("%f", &width);
    printf("Height: ");
    scanf("%f", &height);

    volume1 = (length * width * height);
    vol_of_brick = (len/to_m) * (wid/to_m) * (heigh/to_m);

    bricks = volume1 / vol_of_brick;

    printf("%d Bricks", bricks);
    return (0);
}