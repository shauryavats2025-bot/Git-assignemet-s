#include <stdio.h>
int main() {
    long long num;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%lld", &num);
    do {
        count++;
        num /= 10;
    } while (num != 0);
    printf("Total digits: %d\n", count);
    return 0;
}
