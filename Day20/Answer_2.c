#include <stdio.h>
int main() {
    int rows, cols, i, j;
    int matrix[10][10];
    int isSymmetric = 1; 
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    if (rows != cols) {
        printf("The matrix is NOT symmetric (It must be a square matrix).\n");
        return 0; 
    }
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; 
                break;         
            }
        }
        if (isSymmetric == 0) {
            break;
        }
    }
    if (isSymmetric == 1) {
        printf("The matrix is a SYMMETRIC matrix.\n");
    } else {
        printf("The matrix is NOT a symmetric matrix.\n");
    }
    return 0;
}
