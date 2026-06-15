#include <stdio.h>


int reverseRecursive(int num, int reversedSoFar) {
    if (num == 0) {
        return reversedSoFar;
    }
    int lastDigit = num % 10;
    reversedSoFar = (reversedSoFar * 10) + lastDigit;
    return reverseRecursive(num / 10, reversedSoFar);
}
int main() {
    int number;
    printf("Enter an integer to reverse: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    int result = reverseRecursive(number, 0);
    printf("Reversed Number: %d\n", result);
    return 0;
}
