#include <stdio.h>

int main()
{
    int a, b, c, d, e, f;
    a = 10;
    b = 55;
    c = 78;
    d = 56;
    e = 37;
    f = 82;

    float soltn1 = 0, soltn2 = 0, soltn3 = 0, soltn4 = 0;
     soltn1 = a + b;
     soltn2 = b - c;
     soltn3 = c * d;
     soltn4 = d / f;

     printf("Sum of a and b is %f\n", soltn1);
     printf("Subtracting c from b results to %f\n", soltn2);
     printf("Product of c and d is %f\n", soltn3);
     printf("Dividing d by f results to %f\n", soltn4);

     return 0;

}