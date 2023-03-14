#include <stdio.h>

int main()
{
    int a=55, b=67, c=77, d=98;
    int res1, res2, res3, res4, res5, res6;

    res1 = (a > b);
    res2 = (c < d);
    res3 = (a <= d);
    res4 = (d >= a);
    res5 = (c != 23);
    res6 = (44 == 44);

    printf("For the below results: \n1=True \n 0=False");
    printf("\nres1: %d\nres2: %d", res1, res2);
    printf("\nres3: %d\nres4: %d", res3, res4);
    printf("\nres5: %d\nres6: %d", res5, res6);

    return (0);
}
