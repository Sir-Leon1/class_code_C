<<<<<<< HEAD
#include <stdio.h>
#include <math.h>
#define PIE 3.142

float vol_cone(float, float);
float cube_sur_area(float);

int main()
{
    float to_m = 37.39, heit, r, vol1, cube_dimen, area1, cost;
    printf("Enter the following:\n(in inches)\nHeight: ");
    scanf("%f", &heit);
    printf("Radius: ");
    scanf("%f", &r);

    vol1 = vol_cone((heit/to_m), (r/to_m));
    cube_dimen = cbrtf(vol1);
    printf("Dimensions of the cube are\nL=%.2fm\nW=%.2fm\nH=%.2fm", cube_dimen, cube_dimen, cube_dimen);

    area1 = cube_sur_area(cube_dimen);
    cost = area1 * 150;
    printf("\nPrinting would cost: %.2f SH", cost);

    return (0);
}

float cube_sur_area(float cube_dimen)
{
    return ((cube_dimen * cube_dimen) * 6);
}

float vol_cone(float heit, float r)
{
    return (PIE * (r * r) * (heit / 3));
}
=======
#include <stdio.h>
#include <math.h>
#define PIE 3.142

float vol_cone(float, float);
float cube_sur_area(float);

int main()
{
    float to_m = 37.39, heit, r, vol1, cube_dimen, area1, cost;
    printf("Enter the following:\n(in inches)\nHeight: ");
    scanf("%f", &heit);
    printf("Radius: ");
    scanf("%f", &r);

    vol1 = vol_cone((heit/to_m), (r/to_m));
    cube_dimen = cbrtf(vol1);
    printf("Dimensions of the cube are\nL=%.2fm\nW=%.2fm\nH=%.2fm", cube_dimen, cube_dimen, cube_dimen);

    area1 = cube_sur_area(cube_dimen);
    cost = area1 * 150;
    printf("\nPrinting would cost: %.2f SH", cost);

    return (0);
}

float cube_sur_area(float cube_dimen)
{
    return ((cube_dimen * cube_dimen) * 6);
}

float vol_cone(float heit, float r)
{
    return (PIE * (r * r) * (heit / 3));
}
>>>>>>> 58bec94883e99c79d24f55ab1a195590bdda1196
