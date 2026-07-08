#include <stdio.h>
int main() {
    int roll_numbers[100];
    char names[100][50];  
    float marks[100];
    int total_students = 0;
    int choice;
    while (1) {
        printf("\n--- STUDENT SYSTEM ---\n");
        printf("1. Add Student\n");
        printf("2. Display All\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Enter Roll Number: ");
            scanf("%d", &roll_numbers[total_students]);
            printf("Enter Name (No spaces): ");
            scanf("%s", names[total_students]); 
            printf("Enter Marks: ");
            scanf("%f", &marks[total_students]);
            total_students++;
            printf("Student added successfully!\n");
        } else if (choice == 2) {
            if (total_students == 0) {
                printf("No records found!\n");
            } else {
                printf("\n--- STUDENT LIST ---\n");
                for (int i = 0; i < total_students; i++) {
                    printf("Roll: %d | Name: %s | Marks: %.2f\n", 
                           roll_numbers[i], names[i], marks[i]);
                }
            }
        } else if (choice == 3) {
            printf("Exiting program.\n");
            break;
        } else {
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
