#include <stdio.h>
unsigned long long findNthFibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    unsigned long long first = 0;
    unsigned long long second = 1;
    unsigned long long next = 0;
    for (int i = 2; i <= n; i++) {
        next = first + second;
        first = second;
        second = next;
    }
    return next;
}
int main() {
    int n;
    printf("Enter the value of n (0-indexed): ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Please enter a valid non-negative integer.\n");
        return 1;
    }
    unsigned long long result = findNthFibonacci(n);
    printf("The %dth Fibonacci term is: %llu\n", n, result);
    return 0;
}
