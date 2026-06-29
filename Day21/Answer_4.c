#include <stdio.h>
#include <ctype.h>
int main() {
    char lowerChar, upperChar;
    printf("Enter a lowercase letter: ");
    scanf("%c", &lowerChar);
    upperChar = toupper(lowerChar);
    printf("Uppercase letter: %c\n", upperChar);
    return 0;
}
