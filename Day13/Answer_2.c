#include <stdio.h>
int main() {
    int size, sum = 0;
    float average;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    int arr[size]; 
    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < size; i++) {
        sum += arr[i]; 
    }
    average = (float)sum / size;
    printf("\nSum of array elements = %d\n", sum);
    printf("Average of array elements = %.2f\n", average);
    return 0;
}
