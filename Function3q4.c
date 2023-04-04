#include <stdio.h>

void multiplication(int, int);

int main()
{
    int num, row, mult;
    printf("Choose a multiplication table between 1 and 20\n(1 and 20 included): ");
    scanf("%d", &num);

    for (row = 1; row <= num; row++)
    {
        printf(" ");

        multiplication(num, row);

        printf("\n");
    }
    
    return (0);
}

void multiplication(int num, int row)
{
    int mult, prod = 0;

    for (mult = 1; mult <= num; mult++)
    {
        prod = mult * row;
        printf(" ");

        if (prod <= 9)
        {
            printf("  ");
        }
        else
        {
            printf(" %d", (prod / 10));
        }
        printf("%d", (prod % 10));
    }
}
