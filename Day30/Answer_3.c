#include <stdio.h>
struct Employee {
    int id;
    char name[30];
    float salary;
};
int main() {
    struct Employee emp[50];
    int count = 0;         
    int choice;
    while (1) {
        printf("\n1. Add Employee\n");
        printf("2. Show All\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Enter ID: ");
            scanf("%d", &emp[count].id);
            printf("Enter Name (No spaces): ");
            scanf("%s", emp[count].name);
            printf("Enter Salary: ");
            scanf("%f", &emp[count].salary);
            count++;
            printf("Added successfully!\n");
        } else if (choice == 2) {
            if (count == 0) {
                printf("No data found.\n");
            } else {
                printf("\nID\tName\tSalary\n");
                for (int i = 0; i < count; i++) {
                    printf("%d\t%s\t%.2f\n", emp[i].id, emp[i].name, emp[i].salary);
                }
            }
        } else if (choice == 3) {
            printf("Goodbye!\n");
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}
