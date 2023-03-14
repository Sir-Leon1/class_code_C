#include <stdio.h>

int main()
{

	int min, max, min1, min2;
	int attempts = 0;

	printf("Enter two numbers\nMaximum number(Not more than 200): ");
	scanf("%d", &max);
	printf("Minimum number(Not less than 5): ");
	scanf("%d", &min);
	min1 = min;
	min2 = min;

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

		attempts++;
	}

	printf("\n");

	while (min < (max+1))
	{
		printf("%d, ", min);
		min++;
	}

	printf("\n");
	while (min1 < (max+1))
	{
		if (min1 % 2 == 0)
		{
			printf("%d, ", min1);
		}
		min1++;
	}


	return (0);
}
