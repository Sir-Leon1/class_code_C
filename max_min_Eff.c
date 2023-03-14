#include <stdio.h>
#include "efficiency.h"

int main()
{
	int min, max, min1, min2;
	int *r;
	int attempts = 0;

	printf("Enter two numbers\nMaximum number(Not more than 200): ");
	scanf("%d", &max);
	printf("Minimum number(Not less than 5): ");
	scanf("%d", &min);
	min1 = min;
	min2 = min;

	r = error_value(max, min);
	if (r == NULL)
		return (0);
	printf("%d", *(r+(1*sizeof(int))));
	/*while ((max > 200) || (min < 5) || (max < min) && (attempts < 2))
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
	}*/

	printf("\n");

	while ((*r) < (*(r+(1*sizeof(int))))+1)
	{
		printf("%d, ", (*r));
		(*r)++;
	}

	printf("\n");
	while ((*(r+(2*sizeof(int)))) < (*(r+(1*sizeof(int))))+1)
	{
		if ((*r) % 2 == 0)
		{
			printf("%d, ", *r);
		}
		(*(r+(2*sizeof(int))))++;
	}


	return (0);
}
