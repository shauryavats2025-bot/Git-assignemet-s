#include <stdio.h>
int main() {
    int num, i, sum = 0;
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    if (num <= 0) {
        printf("%d is NOT a perfect number.\n", num);
        return 0;
    }
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i; 
        }
    }
    if (sum == num) {
        printf("%d is a PERFECT number.\n", num);
    } else {
        printf("%d is NOT a perfect number.\n", num);
    }
    return 0;
}
