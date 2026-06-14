#include <stdio.h>
int countSetBits(unsigned int num) {
    int count = 0;
    while (num > 0) {
        num &= (num - 1); 
        count++;
    }
    return count;
}
int main() {
    unsigned int number;
    printf("Enter an integer: ");
    if (scanf("%u", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    int result = countSetBits(number);
    printf("Number of set bits (Custom Algo): %d\n", result);
    int builtInResult = __builtin_popcount(number);
    printf("Number of set bits (GCC Built-in): %d\n", builtInResult);
    return 0;
}
