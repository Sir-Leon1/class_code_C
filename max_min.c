#include <stdio.h>

int main()
{

	int min, max, min1, min2, max1;
	int attempts = 0;

	printf("Enter two numbers\nMaximum number(Not more than 200): ");
	scanf("%d", &max);
	printf("Minimum number(Not less than 5): ");
	scanf("%d", &min);
	min1 = min;
	min2 = min;
	max1 = max;

	while ((max > 200) || (min < 5) || (max < min) && (attempts < 2))
	{
		if (attempts == 1)
		{
			printf(": You have run out of attempts :");
			return (0);
		}

		printf("\n\tTry again\n");
		printf("Enter two numbers\nMaximum number(not more than 200): ");
		scanf("%d", &max);
		printf("Minimum number(Not less than 5): ");
		scanf("%d", &min);
		min1 = min;
		min2 = min;
		max1 = max;

		attempts++;
	}

	printf("\n");

	while (max > (min-1))
	{
		printf("%d, ", max);
		max--;
	}

	printf("\n\n");
	while (min1 < (max1+1))
	{
		if (min1 % 2 == 0)
		{
			printf("%d, ", min1);
		}
		min1++;
	}


	return (0);
}
