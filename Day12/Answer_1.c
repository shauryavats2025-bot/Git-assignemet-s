#include <stdio.h>
int isNumberPalindrome(int num) {
    int reversed = 0;
    int remainder;
    int original = num;
    if (num < 0) {
        return 0;
    }
    while (num != 0) {
        remainder = num % 10;
        reversed = (reversed * 10) + remainder;
        num /= 10;
    }
    return (original == reversed);
}
int main() {
    int number = 12321;
    if (isNumberPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }
    return 0;
}
