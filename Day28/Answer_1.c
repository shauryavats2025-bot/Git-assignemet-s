#include <stdio.h>
struct Book {
    int id;
    char title[50];
    char author[50];
};
int main() {
    struct Book library[100];
    int bookCount = 0;
    int choice, searchId, found;
    while (1) {
        printf("\n1. Add Book\n2. Display All\n3. Search Book\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Enter ID: ");
            scanf("%d", &library[bookCount].id);
            printf("Enter Title (no spaces): ");
            scanf("%s", library[bookCount].title);
            printf("Enter Author (no spaces): ");
            scanf("%s", library[bookCount].author);
            bookCount++;
            printf("Book added successfully!\n");
        } 
        else if (choice == 2) {
            if (bookCount == 0) {
                printf("No books in library.\n");
            } else {
                for (int i = 0; i < bookCount; i++) {
                    printf("\nID: %d | Title: %s | Author: %s\n", 
                           library[i].id, library[i].title, library[i].author);
                }
            }
        } 
        else if (choice == 3) {
            printf("Enter ID to search: ");
            scanf("%d", &searchId);
            found = 0;
            for (int i = 0; i < bookCount; i++) {
                if (library[i].id == searchId) {
                    printf("Found! Title: %s, Author: %s\n", library[i].title, library[i].author);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Book not found.\n");
            }
        } 
        else if (choice == 4) {
            printf("Goodbye!\n");
            break;
        } 
        else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}
