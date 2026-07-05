#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    struct Student s[100];
    int count = 0;         
    int choice;          
    int searchRoll;      
    int found;           
    while (1) {
        printf("\n--- STUDENT SYSTEM ---\n");
        printf("1. Add Student\n");
        printf("2. Display All\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Enter Roll Number: ");
            scanf("%d", &s[count].roll);
            printf("Enter Name (No spaces): ");
            scanf("%s", s[count].name);
            printf("Enter Marks: ");
            scanf("%f", &s[count].marks);
            count++; 
            printf("Student added successfully!\n");
        } else if (choice == 2) {
            if (count == 0) {
                printf("No records found!\n");
            } else {
                printf("\nRoll\tName\tMarks\n");
                for (int i = 0; i < count; i++) {
                    printf("%d\t%s\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
                }
            }
        } else if (choice == 3) {
            if (count == 0) {
                printf("No records available to search!\n");
            } else {
                printf("Enter Roll Number to search: ");
                scanf("%d", &searchRoll);
                found = 0;
                for (int i = 0; i < count; i++) {
                    if (s[i].roll == searchRoll) {
                        printf("\nFound! Name: %s, Marks: %.2f\n", s[i].name, s[i].marks);
                        found = 1;
                        break;
                    }
                }
                if (found == 0) {
                    printf("Student not found.\n");
                }
            }
        } else if (choice == 4) {
            printf("Exiting program...\n");
            break;
        } else {
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
