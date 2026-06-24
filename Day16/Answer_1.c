#include <stdio.h>
int findMissingNumber(int arr[], int size, int n) {
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }
    return expectedSum - actualSum;
}
int main() {
    int arr[] = {1, 2, 3, 5, 6}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = size + 1; 
    int missingNumber = findMissingNumber(arr, size, n);
    printf("The missing number is: %d\n", missingNumber);
    return 0;
}
