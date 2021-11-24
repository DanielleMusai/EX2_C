#include<stdio.h>
#include "my_mat.h"
#define MIN(a,b) a > b ? b : a
#define n 10

void Matrix(int matrix[n][n])
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}
int pathOrnot(int mat[n][n],int i, int j)
{
    if (mat[i][j] != 0){
        return 1;//true
    }
    else
    {
        return 0;//false
    }
}
void valueMatrix(int mat[n][n],int i, int j)
{

    if (pathOrnot(mat,i,j) != 0)
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
int min(int a, int b)
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
void theShortestpath(int arr[n][n]){

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int temp = arr[i][k] + arr[k][j];
                if (i == j)
                {
                    arr[i][j] = 0;
                }
                else{
                    if (arr[i][k] == 0 || arr[k][j] == 0)
                    {
                        temp = 0;
                    }
                    arr[i][j] = min(arr[i][j],temp);
                }
            }
        }
    }
}
