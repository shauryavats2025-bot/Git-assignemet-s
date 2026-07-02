#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
bool isRotation(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2) {
        return false;
    }
    char *temp = (char *)malloc(sizeof(char) * (len1 * 2 + 1));
    if (temp == NULL) {
        printf("Memory allocation failed.\n");
        return false;
    }
    strcpy(temp, str1);
    strcat(temp, str1);
    bool result = (strstr(temp, str2) != NULL);
    free(temp);
    return result;
}
int main() {
    char s1[] = "ABCD";
    char s2[] = "CDAB";
    if (isRotation(s1, s2)) {
        printf("Yes, '%s' is a rotation of '%s'\n", s2, s1);
    } else {
        printf("No, '%s' is NOT a rotation of '%s'\n", s2, s1);
    }
    return 0;
}
