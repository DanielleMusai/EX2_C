#include<stdio.h>
#define n 10
#include "my_mat.h"


int main(){
char input = 1;
int matrix [n][n]={0};
scanf ("%c", &input);
while ( input!='D')
{
    if (input == 'A')
    {
         A(matrix);
           theShortestpath(matrix);
        }

    if (input == 'B')
    {
         int i, j;
            scanf("%d%d", &i, &j);
            if (B(matrix,i,j) != 0)
            {
                printf("True\n");

           } else{
                 printf("False\n");
            }

}

     else if (input == 'C')
    {
         int i,j;
            scanf("%d%d", &i, &j);
           C(matrix,i,j);

}
 scanf("%c",&input) ;  
}
}
