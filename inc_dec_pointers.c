#include <stdio.h>

void main()
{
    int a[] = {3, 2, 67, 0, 56};

    int *p = a;
    p++;
    printf("%d %d ", *(p), *(p++));
    printf("\n%d %d %d ", *--p, *--p, *--p);
}