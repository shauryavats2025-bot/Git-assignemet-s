#include <stdio.h>
int main() {
    long long binary;
    int decimal = 0, base = 1, remainder;
    printf("Enter a binary number (e.g., 1101): ");
    scanf("%lld", &binary);
    long long temp = binary;
    while (binary > 0) {
        remainder = binary % 10; 
        decimal += remainder * base; 
        binary /= 10;              
        base *= 2;                 
    }
    printf("Binary number: %lld\n", temp);
    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
