#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    char longest[100] = ""; 
    char current[100] = "";
    int max_len = 0;
    int cur_len = 0;
    int j = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin); 
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            current[j++] = str[i];
            cur_len++;
        } 
        else {
            current[j] = '\0';
            if (cur_len > max_len) {
                max_len = cur_len;
                strcpy(longest, current); 
            }
            cur_len = 0;
            j = 0;
        }
    }
    printf("\nThe longest word is: %s", longest);
    printf("\nIts length is: %d\n", max_len);
    return 0;
}
