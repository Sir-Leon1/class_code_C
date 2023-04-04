#include<stdio.h>

int main()
{
   int mat[2][2] ={{1,6},{3,4}};
   int mat2 [2][2] = {{6,6}, {7,8}};
   int result[2][2];
    
   result [0][0]= mat[0][0] * mat2 [0][0] + mat[0][1] * mat2[1][0];
   result [0][1]= mat[0][0] * mat2 [0][1] + mat[0][1] * mat2[1][1];
   result [1][0]= mat[1][0] * mat2 [0][0] + mat[1][0] * mat2[1][0];
   result [1][1]= mat[1][0] * mat2 [0][1] + mat[1][1] * mat2[1][1];

   printf("\n %d\t%d", result[0][0], result[0][1]);
   printf("\n %d\t%d", result[1][0], result[1][1]);

    return 0;
}