#include <stdio.h>
struct Employee {
    int id;
    char name[30];
    float basic;
    float allowance;
    float net_salary;
};
int main() {
    struct Employee emp[50];
    int count = 0;
    int choice;
    while (1) {
        printf("\n--- SALARY SYSTEM ---\n");
        printf("1. Add Employee\n");
        printf("2. Display All\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("\nEnter ID: ");
            scanf("%d", &emp[count].id);
            printf("Enter Name (No spaces): ");
            scanf("%s", emp[count].name);
            printf("Enter Basic Salary: ");
            scanf("%f", &emp[count].basic);
            emp[count].allowance = emp[count].basic * 0.20;
            emp[count].net_salary = emp[count].basic + emp[count].allowance;
            count++;
            printf("Saved successfully!\n");
        } else if (choice == 2) {
            if (count == 0) {
                printf("\nNo records found!\n");
            } else {
                printf("\nID\tName\tBasic\tBonus\tNet Salary\n");
                printf("-----------------------------------------\n");
                for (int i = 0; i < count; i++) {
                    printf("%d\t%s\t%.2f\t%.2f\t%.2f\n", 
                           emp[i].id, emp[i].name, emp[i].basic, emp[i].allowance, emp[i].net_salary);
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
