#include <stdio.h>

int main()
{
    float sum1, sum2, n1, n2, diff;
    int YOB, Age;
    char *fname;

    printf("\nEnter your first name: ");
    scanf("%s", fname);
    printf("\nEnter Year of birth: ");
    scanf("%d", &YOB);
    printf("\nEnter two numbers of your choice\nfirst number: ");
    scanf("%f", &n1);
    printf("\nSecond number: ");
    scanf("%f", &n2);

    Age = 2023 - YOB;
    sum1 = n1 + n2;
    diff = n1 - n2;
    sum2 = ((n1 * n1) + (n2 * n2));

    printf("\nYour first name is : %s\n", &fname);
    printf("Your age is : %d\n", Age);
    printf("\nSum of the two numbers is : %f\n", sum1);
    printf("Difference of the two numbers is : %f\n", diff);
    printf("Sum of their squares is : %f\n", sum2);

    if (n1 > n2)
    {
        printf("%f : is greater than : %f\n", n1, n2);

    }
    else if (n1 < n2)
    {
        printf("\n%f : is greater than : %f\n", n2, n1);
    }
    else
    {
        printf("\nThe entered numbers are the same\n");
    }

    //printf("\tBye");

    return (0);
}