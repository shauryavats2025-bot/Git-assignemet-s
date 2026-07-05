#include <stdio.h>
struct Employee {
    int id;
    char name[30];
    char dept[30];
    float salary;
};
int main() {
    struct Employee emp[100]; 
    int count = 0;           
    int choice, searchId, found;

    while (1) {
        printf("\n--- EMPLOYEE SYSTEM ---\n");
        printf("1. Add Employee\n");
        printf("2. Display All\n");
        printf("3. Search by ID\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 4) {
            printf("Goodbye!\n");
            break;
        }
        if (choice == 1) {
            printf("\nEnter ID (Number): ");
            scanf("%d", &emp[count].id);
            printf("Enter Name (No spaces): ");
            scanf("%s", emp[count].name);
            printf("Enter Department: ");
            scanf("%s", emp[count].dept);
            printf("Enter Salary: ");
            scanf("%f", &emp[count].salary);
            count++;
            printf("Employee added!\n");
        } 
        else if (choice == 2) {
            if (count == 0) {
                printf("\nNo employees found!\n");
            } else {
                printf("\nID\tName\tDept\tSalary\n");
                printf("---------------------------------\n");
                for (int i = 0; i < count; i++) {
                    printf("%d\t%s\t%s\t%.2f\n", emp[i].id, emp[i].name, emp[i].dept, emp[i].salary);
                }
            }
        } 
        else if (choice == 3) {
            printf("\nEnter ID to search: ");
            scanf("%d", &searchId);
            found = 0;
            for (int i = 0; i < count; i++) {
                if (emp[i].id == searchId) {
                    printf("\nFound! Name: %s, Dept: %s, Salary: %.2f\n", emp[i].name, emp[i].dept, emp[i].salary);
                    found = 1;
                    break;
                }
            }
            if (found == 0) {
                printf("Employee not found.\n");
            }
        } 
        else {
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}