#include<stdio.h>
#define MAX 3

int main()
{ 

    int i, j;
    int matrix_A[MAX][MAX];
    int matrix_B[MAX][MAX];
    int matrix_SUM[MAX][MAX];

    // Input the elements for the first matrix
    printf("Enter the elements of Matrix A :");
    for( i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d",&matrix_A[i][j]);
        }
    }

    // Input the elements for the second matrix
    printf("Enter the elements of Matrix B :");
    for( i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d",&matrix_B[i][j]);
        }
    }

    // display the elements of first matrices
    printf("The elements of Matrix A are :\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", matrix_A[i][j]);
        }
        printf("\n");
    }


    // display the elements of second matrices
    printf("The elements of Matrix B are :\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", matrix_B[i][j]);
        }
        printf("\n");
    }


    // add the two matrices
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            matrix_SUM[i][j] = matrix_A[i][j] + matrix_B[i][j];
        }
    }

    // display the elements of sum of two matrices
    printf("The sum of the two matrices is :\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", matrix_SUM[i][j]);
        }
        printf("\n");
    }


    return 0;
}