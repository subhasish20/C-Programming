#include <stdio.h>
#define MAX 3

int main() {
    int i, j;
    int matrix_A[MAX][MAX], matrix_B[MAX][MAX], matrix_DIFF[MAX][MAX];

    // Input elements for Matrix A
    printf("Enter the elements of Matrix A:\n");
    for(i = 0; i < MAX; i++)
        for(j = 0; j < MAX; j++)
            scanf("%d", &matrix_A[i][j]);

    // Input elements for Matrix B
    printf("Enter the elements of Matrix B:\n");
    for(i = 0; i < MAX; i++)
        for(j = 0; j < MAX; j++)
            scanf("%d", &matrix_B[i][j]);

    // Matrix Subtraction
    for(i = 0; i < MAX; i++)
        for(j = 0; j < MAX; j++)
            matrix_DIFF[i][j] = matrix_A[i][j] - matrix_B[i][j];

    // Display Result
    printf("The difference of Matrix A and B is:\n");
    for(i = 0; i < MAX; i++) {
        for(j = 0; j < MAX; j++)
            printf("%d\t", matrix_DIFF[i][j]);
        printf("\n");
    }

    return 0;
}
