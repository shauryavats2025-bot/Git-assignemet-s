#include <stdio.h>
int main() {
    int arr1[] = {1, 2, 4, 5, 6, 2};
    int arr2[] = {2, 3, 5, 6, 6, 7};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int visited[100];
    int visitedCount = 0;
    printf("Common elements are: ");
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                int alreadyPrinted = 0;
                for (int k = 0; k < visitedCount; k++) {
                    if (visited[k] == arr1[i]) {
                        alreadyPrinted = 1;
                        break;
                    }
                }
                if (!alreadyPrinted) {
                    printf("%d ", arr1[i]);
                    visited[visitedCount] = arr1[i];
                    visitedCount++;
                }
                break; 
            }
        }
    }
    printf("\n");
    return 0;
}
