#include <stdio.h>
int isDuplicate(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return 1; 
        }
    }
    return 0; 
}
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int unionArr[n1 + n2]; 
    int k = 0;
    for (int i = 0; i < n1; i++) {
        if (!isDuplicate(unionArr, k, arr1[i])) {
            unionArr[k] = arr1[i];
            k++;
        }
    }
    for (int i = 0; i < n2; i++) {
        if (!isDuplicate(unionArr, k, arr2[i])) {
            unionArr[k] = arr2[i];
            k++;
        }
    }
    printf("Union of the two arrays: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");
    return 0;
}
