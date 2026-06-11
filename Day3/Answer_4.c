#include <stdio.h>

int main() {
    int num1, num2, a, b, temp, gcd, lcm;
    printf("Enter two positive integers: ");
    if (scanf("%d %d", &num1, &num2) != 2 || num1 <= 0 || num2 <= 0) {
        printf("Please enter valid positive integers.\n");
        return 1;
    }
    a = num1;
    b = num2;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    lcm = (num1 / gcd) * num2; 
    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd);
    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);
    return 0;
}
