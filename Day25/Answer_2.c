#include <stdio.h>
#include <string.h>
int main() {
    char str1[] = "hello";
    char str2[] = "world";
    int checked[256] = {0}; 
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    printf("Common characters: ");
    for (int i = 0; str1[i] != '\0'; i++) {
        checked[(unsigned char)str1[i]] = 1;
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        unsigned char ch = str2[i];
        if (checked[ch] == 1) {
            printf("%c ", ch);
            checked[ch] = 0; 
        }
    }
    printf("\n");
    return 0;
}
