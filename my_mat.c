#include<stdio.h>
#include "my_mat.h"
#define MIN(a,b) a > b ? b : a
#define n 10

void A(int matrix[n][n])
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}
int B(int mat[n][n],int i, int j)
{
    if (mat[i][j] != 0){
        return 1;//true
    }
    else
    {
        return 0;//false
    }
}
void C(int mat[n][n],int i, int j)
{

    if (B(mat,i,j) != 0)
    {
       printf("%d", mat[i][j]);
       printf("\n");
    }
    else
    {
       printf("-1");
        printf("\n");
       
    }
}

//min
int minFunc(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    else if (b == 0)
    {
        return a;
    }

    return (a > b) ? b : a;
}
//algo
void theShortestpath(int mat[n][n]){

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int path = mat[i][k] + mat[k][j];
                if (i == j)
                {
                    mat[i][j] = 0;
                }
                else{
                    if (mat[i][k] != 0 && mat[k][j] != 0)
                    {
                      mat[i][j] = minFunc(mat[i][j],path);
                    }
                    else{
                    path = 0;
                }
            }
        }
    }
}}
