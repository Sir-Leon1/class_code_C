#include <stdio.h>

//function declarations
int add(int, int);
int (*get_func())(int, int);

int add(int a, int b)
{
    return (a + b);
}

int (*get_func())(int, int)
{
    return (&add);
}

int main()
{
    int result, a, b;
    int (*func_ptr)(int, int) = get_func();

    scanf("%d", &b);
    scanf("%d", &a);

    result = func_ptr(a, b);

    printf("The method is complex but %d + %d = %d", a, b, result);

    return (0);
}
