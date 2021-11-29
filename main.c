#include <stdio.h>
#define n 10
#include "my_mat.h"

int main()
{

    int matrix[n][n];
    char ch;
    do
    {
        ch = getchar();
        switch (ch)
        {
            //A
        case 'A':{
           A(matrix);
           theShortestpath(matrix);
        }
        break;
           //B
        case 'B':{
            int i, j;
            scanf("%d%d", &i, &j);
            if (B(matrix,i,j) != 0)
            {
                printf("True\n");
               
            }
            else{
                 printf("False\n");
            }
        }
        break;
         //C
        case 'C':{
            int i,j;
            scanf("%d%d", &i, &j);
           C(matrix,i,j);
        }
        break;
        }
       
       //D
    } while (ch != 'D');
}
