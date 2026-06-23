#include <stdio.h>
void leftRotate(int arr[], int d, int n) {
    d = d % n; 
    for (int i = 0; i < d; i++) {
        int first = arr[0]; 
        for (int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = first; 
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2; 
    printf("Original array: ");
    printArray(arr, n);
    leftRotate(arr, d, n);
    printf("Array after rotating left by %d positions: ", d);
    printArray(arr, n);
    return 0;
}
