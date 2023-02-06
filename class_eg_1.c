#include <stdio.h>
int main()
{
    int a = 10;
    float b = 10.77;
    char z = 's';
    //double
    char *l = "Hello Canada";
    double e = 10.77777777;

    printf("My first int is %d\n", sizeof(char *));
    printf("My first float is %f\n", b);
    printf("My first character is %c\n", z);
    printf("My first string is %s\n", l);
    printf("My first double is %lf", e);

    return 0;

}