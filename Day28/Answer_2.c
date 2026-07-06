#include <stdio.h>
int main() {
    int choice;
    int accNumber = 0;
    float balance = 0.0;
    float amount;
    printf("=== Simple Bank System ===\n");
    while (1) {
        printf("\n1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 5) {
            printf("Goodbye!\n");
            break;
        }
        if (choice == 1) {
            printf("Enter Account Number: ");
            scanf("%d", &accNumber);
            printf("Enter Initial Deposit: ");
            scanf("%f", &balance);
            printf("Account Created!\n");
        } 
        else if (choice == 2) {
            printf("Enter Deposit Amount: ");
            scanf("%f", &amount);
            balance = balance + amount;
            printf("Deposited! New Balance: %.2f\n", balance);
        } 
        else if (choice == 3) {
            printf("Enter Withdraw Amount: ");
            scanf("%f", &amount);
            if (amount > balance) {
                printf("Not enough money!\n");
            } else {
                balance = balance - amount;
                printf("Withdrawn! New Balance: %.2f\n", balance);
            }
        } 
        else if (choice == 4) {
            printf("Account: %d\n", accNumber);
            printf("Balance: %.2f\n", balance);
        } 
        else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}
