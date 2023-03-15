#include <stdio.h>
#include "efficiency.h"


/*
* validation: This code checks if the max and min input meet
the required criteria
@min: The minimum value
@max: The maximum value
Return: 1 if criteria is met : 0 if criteria is not met 
*/

int validation(int *min, int *max)
{
    int attempts = 0;
    while ((*max > 200) || (*min < 5) || (*max < *min) && (attempts < 2))
	{
		if (attempts == 1)
		{
			printf(": You have run out of attempts :");
			return (0);
		}

		printf("\n\tTry again\n");
		printf("Enter two numbers\nMaximum number(not more than 200): ");
		scanf("%d", max);
		printf("Minimum number(Not less than 5): ");
		scanf("%d", min);

		attempts++;
	}
    return (1);
}

/*
seq_max_min: Prints the sequence of numbers from max to min
@max: The maximum value
@min: The minimum value
*/
void seq_max_min(int min, int max)
{
    while (max > min-1)
    {
        printf("%d, ", max);
        max--;
    }
}

/*
seq_max_min: Prints the even values between min and max 
respectively
@min: The minimum value
@max: The maximum value
*/
void seq_even(int min, int max)
{
    while(min < max+1)
    {
        if (min % 2 == 0)
        {
            printf("%d, ", min);
        }
        min++;
    }
}