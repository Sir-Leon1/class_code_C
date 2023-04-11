#include <stdio.h>

int main()
{
    //Calculates the product of two 2 by 2 matrix

    int matrix = 0, row, column;
    int matrix_1[2][2], matrix_2[2][2], result[2][2];

    while (matrix < 2)
    {
        if (matrix == 1)
            printf("\nEnter values for matrix 2\n");

        for (row = 0; row < 2; row++)
        {
            //if (matrix == 2)
                //printf("Enter values for Matrix %d", row+1);

            for (column = 0; column < 2; column++)
            {
                printf("Row: %d, column: %d = ", row+1, column+1);

                if (matrix == 1)
                    scanf("%d", &matrix_2[row][column]);
                else
                    scanf("%d", &matrix_1[row][column]);
            }

        }

        matrix++;
    }

    result[0][0] = (matrix_1[0][0] * matrix_2[0][0]) + (matrix_1[0][1] * matrix_2[1][0]);
    result[0][1] = (matrix_1[0][0] * matrix_2[0][1]) + (matrix_1[0][1] * matrix_2[1][1]);
    result[1][0] = (matrix_1[1][0] * matrix_2[0][0]) + (matrix_1[1][1] * matrix_2[1][0]);
    result[1][1] = (matrix_1[1][0] * matrix_2[0][1]) + (matrix_1[1][1] * matrix_2[1][1]);

    printf("\nThe product of the two matrix is:\n");

    printf("%d\t%d\n", result[0][0], result[0][1]);
    printf("%d\t%d", result[1][0], result[1][1]);

    return (0);
}