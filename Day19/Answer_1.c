#include <stdio.h>
int main() {
    int rows = 2;
    int cols = 3;
    int matrix1[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int matrix2[2][3] = {
        {7, 8, 9},
        {1, 1, 1}
    };
    int sum[2][3];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Resultant Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
