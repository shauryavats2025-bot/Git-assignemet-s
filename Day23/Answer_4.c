#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int freq[256] = {0}; 
    int i, max_idx;
    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') continue; 
        freq[(unsigned char)str[i]]++;
    }
    max_idx = 0;
    for (i = 0; i < 256; i++) {
        if (freq[i] > freq[max_idx]) {
            max_idx = i;
        }
    }
    printf("Maximum occurring character is '%c' which appears %d times.\n", max_idx, freq[max_idx]);
    return 0;
}
