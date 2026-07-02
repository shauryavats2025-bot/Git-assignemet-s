#include <stdio.h>
#include <string.h>
void removeDuplicates(char *str) {
    int seen[256] = {0};
    int targetIndex = 0; 
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (seen[ch] == 0) {
            seen[ch] = 1;         
            str[targetIndex] = ch; 
            targetIndex++;       
        }
    }
    str[targetIndex] = '\0';
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%99[^\n]", str);
    removeDuplicates(str);
    printf("String after removing duplicates: %s\n", str);
    return 0;
}