#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int visited[256] = {0}; 
    char result = '\0';
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '\n') {
            continue;
        }
        int ascii_val = (unsigned char)str[i];
        if (visited[ascii_val] == 1) {
            result = str[i];
            break;
        }
        visited[ascii_val] = 1;
    }
    if (result != '\0') {
        printf("The first repeating character is: '%c'\n", result);
    } else {
        printf("No repeating characters found.\n");
    }
    return 0;
}
