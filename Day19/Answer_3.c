#include <stdio.h>
int main() {
    int row = 2, col = 3;
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int transpose[3][2];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            transpose[j][i] = matrix[i][j]; 
        }
    }
    printf("Original Matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < col; i++) {      
        for (int j = 0; j < row; j++) {  
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
