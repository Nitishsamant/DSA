#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10];
    int rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of Matrix A:\n");
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of Matrix B:\n");
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            scanf("%d", &b[i][j]);

    // Matrix Addition
    //C[i][j] = A[i][j] + B[i][j] for all valid i and j
    printf("Sum of matrices:\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
