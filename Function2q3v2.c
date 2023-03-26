#include <stdio.h>
#include <math.h>
#define PIE 3.142

float volume(float radius, float height);
float area(float side);
float cost(float surface_area, int a);

int main()
{
    float radius, height, total_volume, surface_area, total_cost, result, side;

    printf("Enter the dimensions of the cone\nRadius=");
    scanf("%f", &radius);
    printf("\nHeight=");
    scanf("%f", &height);

    radius = radius * 0.025;
    height = height * 0.025;

    total_volume = volume(radius, height);
    side = cbrtf(total_volume);
    surface_area = area(side);
    total_cost = cost(surface_area, 150);

    printf("\nThe volume is = %fm³", total_volume);
    printf("\nThe surface area is = %fm²", surface_area);
    printf("\nThe dimensions of the cube are\nLength: %fm\nWidth: %fm\nHeight: %fm", side, side, side);
    printf("\nThe total cost of printing will be = KSH%f", total_cost);

    return (0);
}

float volume(float radius, float height)
{
    float answer;
    answer = ((radius*radius*PIE*height) / 3);
    return (answer);
}

float area(float side)
{
    float answer;
    answer = (side*side)*6;
    return (answer);
}

float cost(float surface_area, int a)
{
    float answer;
    answer = surface_area * a;
    return (answer);
}