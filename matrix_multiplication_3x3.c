#include <stdio.h>
#define MAX 3

int main() {
    int i, j, k;
    int matrix_A[MAX][MAX], matrix_B[MAX][MAX], matrix_PRODUCT[MAX][MAX];

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

    // Initialize product matrix to 0
    for(i = 0; i < MAX; i++)
        for(j = 0; j < MAX; j++)
            matrix_PRODUCT[i][j] = 0;

    // Matrix Multiplication
    for(i = 0; i < MAX; i++) {
        for(j = 0; j < MAX; j++) {
            for(k = 0; k < MAX; k++) {
                matrix_PRODUCT[i][j] += matrix_A[i][k] * matrix_B[k][j];
            }
        }
    }

    // Display Result
    printf("The product of Matrix A and B is:\n");
    for(i = 0; i < MAX; i++) {
        for(j = 0; j < MAX; j++)
            printf("%d\t", matrix_PRODUCT[i][j]);
        printf("\n");
    }

    
    return 0;
}
