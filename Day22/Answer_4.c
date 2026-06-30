#include <stdio.h>
void removeSpaces(char *str) {
    int i = 0;
    int j = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            str[j] = str[i];
        }
    }
    str[j] = '\0'; 
}
int main() {
    char text[100] = "H e l l o  W o r l d !";
    printf("Original String: %s\n", text);
    removeSpaces(text);
    printf("Modified String: %s\n", text);
    return 0;
}
