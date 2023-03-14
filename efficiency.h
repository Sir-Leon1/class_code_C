#ifndef EFFICIENCY_H
#define EFFICIENCY_H

#include <stdio.h>
#include <stdlib.h>

int *error_value(int max, int min);
void min_max(int min, int max);
void even_btwn(int min1, int max);

int *error_value(int max, int min)
{
	int attempts = 0, min1, max1;
	int *min_max;
	min_max = malloc(3 * sizeof(int));
	while ((max > 200) || (min < 5) || (max < min) && (attempts < 2))
	{
		if (attempts == 1)
		{
			printf(": You have run out of attempts :");
			return (NULL);
		}

		printf("\n\tTry again\n");
		printf("Enter two numbers\nMaximum number(not more than 200): ");
		scanf("%d", &max);
		printf("Minimum number(Not less than 5): ");
		scanf("%d", &min);
		min_max = min;
		min_max+1 = max;

		
		attempts++;
	}
	min_max[0] = min;
	min_max[1] = max;
	printf("%d", &min_max[1]);

	return (min_max);
}

#endif
