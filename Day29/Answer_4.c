#include <stdio.h>
int main() {
    int ids[50];
    int quantities[50];
    float prices[50];
    int total_items = 0;
    int choice;
    while (1) {
        printf("\n--- INVENTORY MENU ---\n");
        printf("1. Add Item\n");
        printf("2. Show Items\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Enter Item ID (number): ");
            scanf("%d", &ids[total_items]);
            printf("Enter Quantity: ");
            scanf("%d", &quantities[total_items]);
            printf("Enter Price: ");
            scanf("%f", &prices[total_items]);
            total_items++; 
            printf("Item added!\n");
        } else if (choice == 2) {
            if (total_items == 0) {
                printf("Inventory is empty!\n");
            } else {
                printf("\nID\tQTY\tPRICE\n");
                for (int i = 0; i < total_items; i++) {
                    printf("%d\t%d\t$%.2f\n", ids[i], quantities[i], prices[i]);
                }
            }
        } else if (choice == 3) {
            // Exit
            printf("Goodbye!\n");
            break;
        } else {
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
