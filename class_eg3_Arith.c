#include <stdio.h>
#define pie 3.14

int main()
{
    const float pie2 = 3.142;
    float soltn = 0, soltn2 = 0, soltn3 = 0; //Literal ie declaration and definition at the same time
    soltn = pie + pie2;
    soltn2 = pie - pie2;

    printf("The sum of pie and pie 1 is %f\n While subtracting pie2 from pie 1 is %f",soltn, soltn2 );
    return 0;

}