#include <stdio.h>
#include <string.h>
void compressString(char str[]) {
    int len = strlen(str);
    int count = 1;
    printf("Compressed String: ");
    for (int i = 0; i < len; i++) {
        if (str[i] == str[i + 1]) {
            count++;
        } 
        else {
            printf("%c%d", str[i], count);
            count = 1; 
        }
    }
    printf("\n");
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%99s", str);
    compressString(str);
    return 0;
}
