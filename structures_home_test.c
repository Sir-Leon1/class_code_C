#include <stdio.h>

struct student
{
    int admn;
    int mark;
    char name[20];
};

int main()
{
    struct student s[6];
    int i;

    
   scanf("%d", &s[0].admn);
   printf("%d", s[0].admn);

    return (0);
}