#include <stdio.h>
int main() {
    int arr[100]; 
    int size = 0; 
    int choice, i, num, pos, found;
    do {
        printf("\n--- MENU ---\n");
        printf("1. Add Numbers\n");
        printf("2. Show Array\n");
        printf("3. Insert\n");
        printf("4. Delete\n");
        printf("5. Search\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: 
                printf("How many numbers? ");
                scanf("%d", &size);
                printf("Enter %d numbers:\n", size);
                for(i = 0; i < size; i++) {
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                if(size == 0) {
                    printf("Array is empty!\n");
                } else {
                    printf("Array: ");
                    for(i = 0; i < size; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;
            case 3: 
                printf("Enter number to insert: ");
                scanf("%d", &num);
                printf("Enter position (1 to %d): ", size + 1);
                scanf("%d", &pos);
                for(i = size - 1; i >= pos - 1; i--) {
                    arr[i + 1] = arr[i];
                }
                arr[pos - 1] = num;
                size++;            
                break;
            case 4: 
                if(size == 0) {
                    printf("Nothing to delete!\n");
                    break;
                }
                printf("Enter position to delete (1 to %d): ", size);
                scanf("%d", &pos);
                for(i = pos - 1; i < size - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                size--;
                break;
            case 5: 
                printf("Enter number to search: ");
                scanf("%d", &num);
                found = 0;
                for(i = 0; i < size; i++) {
                    if(arr[i] == num) {
                        printf("Found at position %d!\n", i + 1);
                        found = 1;
                        break;
                    }
                }
                if(found == 0) {
                    printf("Not found!\n");
                }
                break;
            case 6:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 6); 
    return 0;
}
