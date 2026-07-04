#include <stdio.h>
int main() {
    int pin = 1234;
    int enteredPin;
    int choice;
    float balance = 5000.0;
    float amount;
    printf("Enter 4-digit PIN: ");
    scanf("%d", &enteredPin);
    if (enteredPin != pin) {
        printf("Wrong PIN. Goodbye!\n");
        return 0; 
    }
    printf("\n--- ATM MENU ---\n");
    printf("1. Check Balance\n");
    printf("2. Withdraw\n");
    printf("3. Deposit\n");
    printf("Enter choice (1-3): ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Balance: $%.2f\n", balance);
    } 
    else if (choice == 2) {
        printf("Enter amount: ");
        scanf("%f", &amount);
        if (amount > balance) {
            printf("Not enough money!\n");
        } else {
            balance = balance - amount;
            printf("Success! New Balance: $%.2f\n", balance);
        }
    } 
    else if (choice == 3) {
        printf("Enter amount: ");
        scanf("%f", &amount);
        balance = balance + amount;
        printf("Success! New Balance: $%.2f\n", balance);
    } 
    else {
        printf("Invalid choice!\n");
    }
    printf("\nThank you for using our ATM!\n");
    return 0;
}
