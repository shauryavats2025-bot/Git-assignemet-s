#include <stdio.h>

int main() {
    int start, end, i, temp, remainder, digits;
    long long sum;
    printf("Enter lower bound and upper bound: ");
    if (scanf("%d %d", &start, &end) != 2) {
        printf("Invalid input;\n");
        return 1;
    }
    printf("Armstrong numbers between %d and %d are:\n", start, end);
    for (i = start; i <= end; i++) {
        temp = i;
        digits = 0;
        sum = 0;
        while (temp != 0) {
            temp /= 10;
            digits++;
        }
        temp = i;
        while (temp != 0) {
            remainder = temp % 10;
            long long power = 1;
            for (int j = 0; j < digits; j++) {
                power *= remainder;
            }
            sum += power;
            temp /= 10;
        }
        if (sum == i && i != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
