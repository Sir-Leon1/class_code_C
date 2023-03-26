#include <stdio.h>

int main()
{
    int a, b, c, d;
    int boxes[3][4];

    for (a = 0; a < 3; a++)
    {
        for (b = 0; b < 4; b++)
        {
            printf("Enter value for row:%d column:%d = ", (a+1), (b+1));
            scanf("%d", &boxes[a][b]);
        }
    }

    for (c = 0; c < 3; c++)
    {
        printf("\n");
        for (d = 0; d < 4; d++)
        {
            printf("%d\t", boxes[c][d]);
        }
    }

    return (0);
}