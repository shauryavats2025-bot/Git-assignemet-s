#include <stdio.h>
int main() {
    int array[100], size, searchElement, i;
    int found = 0; 
    printf("Enter number of elements in the array: ");
    scanf("%d", &size);
    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &searchElement);
    for (i = 0; i < size; i++) {
        if (array[i] == searchElement) {
            printf("Element %d found at index %d (Position %d).\n", searchElement, i, i + 1);
            found = 1; 
            break;    
        }
    }
    if (found == 0) {
        printf("Element %d is not present in the array.\n", searchElement);
    }
    return 0;
}
