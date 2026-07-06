#include <stdio.h>
#include <string.h>
struct Contact {
    char name[50];
    char phone[20];
};
int main() {
    struct Contact phonebook[100]; 
    int total_contacts = 0;       
    int choice;
    while(1) {
        printf("\n--- CONTACT MENU ---\n");
        printf("1. Add Contact\n");
        printf("2. View All Contacts\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Enter name (no spaces): ");
            scanf("%s", phonebook[total_contacts].name);
            printf("Enter phone number: ");
            scanf("%s", phonebook[total_contacts].phone);
            total_contacts++;
            printf("Contact saved!\n");
        } else if (choice == 2) {
            if (total_contacts == 0) {
                printf("No contacts found!\n");
            } else {
                printf("\n--- ALL CONTACTS ---\n");
                for (int i = 0; i < total_contacts; i++) {
                    printf("%d. %s - %s\n", i + 1, phonebook[i].name, phonebook[i].phone);
                }
            }
        } else if (choice == 3) {
            printf("Goodbye!\n");
            break;
        } else {
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
