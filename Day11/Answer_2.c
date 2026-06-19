#include <stdio.h>
int findMax(int num1, int num2);
int main() {
    int a = 15;
    int b = 25;
    int max;
    max = findMax(a, b);
    printf("The maximum value is: %d\n", max);
    return 0;
}
int findMax(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}
