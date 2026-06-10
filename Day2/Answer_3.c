#include <stdio.h>
#include <stdlib.h> 
int main() {
    int num, originalNum, rem;
    long long product = 1; 
    printf("Enter any integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    originalNum = num;
    if (num == 0) {
        product = 0;
    } else {
        num = abs(num);
        while (num > 0) {
            rem = num % 10;     
            product = product * rem; 
            num = num / 10;       
        }
    }
    printf("The product of the digits of %d is: %lld\n", originalNum, product);
    return 0;
}
