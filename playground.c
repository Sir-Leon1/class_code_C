/*
 * This code finds the cost of painting
 * a playground
 */
#include <stdio.h>

float semi_circle(float diameter);
float rectangle(float lengh, float width);
float triangle(float base, float height);

int main()
{
	float a, b, c, total_area, total_cost;
	
	printf("Enter following sides\nSide a: ");
	scanf("%f", &a);
	printf("Side b: ");
	scanf("%f", &b);
	printf("Side c: ");
	scanf("%f", &c);

	total_area = semi_circle(c) + rectangle(a, c) + triangle(b, c);

	total_cost = total_area * 150;
	printf("\nThe total cost of painting is %.2f\n", total_cost);
}

float semi_circle(float diameter)
{
	float radius;
	radius = diameter / 2;
	return ((3.14 * radius * radius) / 2);
}

float rectangle(float length, float width)
{
	return (length * width);
}

float triangle(float base, float height)
{
	return ((base / 2) * height);
}
