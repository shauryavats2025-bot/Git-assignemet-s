#include <stdio.h>
struct Book {
    int id;
    char title[50];
    char author[50];
};
int main() {
    struct Book library[10];
    int book_count = 0;
    int choice;
    while (1) {
        printf("\n--- LIBRARY MENU ---\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            if (book_count < 10) {
                printf("Enter Book ID (number): ");
                scanf("%d", &library[book_count].id);               
                printf("Enter Title (No spaces): ");
                scanf("%s", library[book_count].title);           
                printf("Enter Author (No spaces): ");
                scanf("%s", library[book_count].author);
                book_count++;
                printf("Book added successfully!\n");
            } else {
                printf("Library is full!\n");
            }
        } 
        else if (choice == 2) {
            if (book_count == 0) {
                printf("No books in the library yet.\n");
            } else {
                printf("\n--- BOOK LIST ---\n");
                for (int i = 0; i < book_count; i++) {
                    printf("ID: %d | Title: %s | Author: %s\n", 
                           library[i].id, library[i].title, library[i].author);
                }
            }
        } 
        else if (choice == 3) {
            printf("Goodbye!\n");
            break;
        } 
        else {
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
