#include <stdio.h>
#include <string.h>
int main() {
    int choice;
    char str1[100], str2[100];
    do {
        printf("\n=== STRING OPERATIONS MENU ===\n");
        printf("1. Find Length of a String\n");
        printf("2. Copy a String\n");
        printf("3. Concatenate (Join) Two Strings\n");
        printf("4. Compare Two Strings\n");
        printf("5. Reverse a String\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);
        while (getchar() != '\n'); 
        switch (choice) {
            case 1:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Length of the string: %lu\n", strlen(str1));
                break;
            case 2:
                printf("Enter source string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                strcpy(str2, str1);
                printf("Successfully copied! New string is: %s\n", str2);
                break;
            case 3:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Enter string to append: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';
                strcat(str1, str2); 
                printf("Joined string: %s\n", str1);
                break;
            case 4:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';
                if (strcmp(str1, str2) == 0) {
                    printf("Both strings are identical.\n");
                } else {
                    printf("Strings are different.\n");
                }
                break;
            case 5:
                printf("Enter a string to reverse: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Reversed string: ");
                for (int i = strlen(str1) - 1; i >= 0; i--) {
                    putchar(str1[i]);
                }
                printf("\n");
                break;
            case 6:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid selection! Please enter a number between 1 and 6.\n");
        }
    } while (choice != 6);
    return 0;
}
