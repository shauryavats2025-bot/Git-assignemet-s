#include <stdio.h>
int main() {
    int rows, cols, i, j;
    int matrix[10][10];
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n--- Row-wise Sums ---\n");
    for(i = 0; i < rows; i++) {
        int rowSum = 0;
        
        for(j = 0; j < cols; j++) {
            rowSum += matrix[i][j]; 
        }
        printf("Sum of Row %d = %d\n", i + 1, rowSum);
    }
    return 0;
}
