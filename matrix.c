#include<stdio.h>

int main()
{
    int n_rows, n_column, row_size, column_size, i, j;

    printf("Enter the row size :");
    scanf("%d",&n_rows);

    printf("Enter the column size :");
    scanf("%d",&n_column);

    int matrix[n_rows][n_column];

    printf("Enter the elements :");
    for(i=0; i<n_rows; i++)
    {
        for(j=0;j<n_column;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }


    printf("Then elements that you have given are :\n");
    for(i=0; i<n_rows; i++)
    {
        for(j=0;j<n_column;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }


    return 0;
}