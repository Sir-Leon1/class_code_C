#include <stdio.h>

int day, value, option;

void insertion(int *array);
void deletion(int *array);
void searching(int *aray);
void update(int *array);

int main()
{
	int students[10] = {1, 45, 78, 45, 67, 89, 80, 45, 67, 20};
	int i, j = 1, option;

	printf("\n\t\tAttendance for last 10 days::\n");
	
	for (i = 0; i < 10; i++)
	{
		printf("\tDay%d  :%d student(s)", j, students[i]);
		((j % 2) == 0) ? printf("\n") : printf("\t");
		j++;
	}

	printf("Pick An Option::\n1.Insert\n2.Delete\n3.Search\n4.Update\n");
	scanf("%d", &option);
	switch (option) {
		case 1:
			insertion(students);
			break;
		case 2:
			deletion(students);
			break;
		case 3:
			searching(students);
			break;
		case 4:
			update(students);
			break;
		default:
			printf("Invalid option");
	}

	return (0);
}

void insertion(int *array)
{
	printf("Enter the Day to inser to e.g 1 or 2:\n");
	scanf("%d", &day);
	printf("Enter the value to inser:\n");
	scanf("%d", &value);
}

void deletion(int *array)
{
	printf("Enter the day to delete e.g 1 or 2:\n");
	scanf("%d", &day);
}

void searching(int *array)
{
	printf("Enter the value / Day you are serching for e.g 1 or 2:");
	scanf("%d", &option);
}

void update(int *array)
{
	printf("Enter the Day to update e.g 1 or 2:");
	scanf("%d", &day);
	printf("Enter the new value:");
	scanf("%d", &value);
}
