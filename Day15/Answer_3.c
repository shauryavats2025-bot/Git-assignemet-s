#include <stdio.h>
void rotateRightOnce(int arr[], int size) {
    int lastElement = arr[size - 1]; 
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = lastElement; 
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int rotations = 2; 
    rotations = rotations % size; 
    printf("Original Array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < rotations; i++) {
        rotateRightOnce(arr, size);
    }
    printf("Array After Right Rotation: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
