#include <stdio.h>
int main() {
    char name[30];
    int roll, math, science, english, total, percentage;
    printf("Enter Student Name (No spaces): ");
    scanf("%s", name);
    printf("Enter Roll Number: ");
    scanf("%d", &roll);
    printf("Enter Math marks: ");
    scanf("%d", &math);
    printf("Enter Science marks: ");
    scanf("%d", &science);
    printf("Enter English marks: ");
    scanf("%d", &english);
    total = math + science + english;
    percentage = total / 3; 
    printf("\n--- MARKSHEET ---\n");
    printf("Name: %s\n", name);
    printf("Roll No: %d\n", roll);
    printf("-----------------\n");
    printf("Math: %d\n", math);
    printf("Science: %d\n", science);
    printf("English: %d\n", english);
    printf("-----------------\n");
    printf("Total: %d / 300\n", total);
    printf("Percentage: %d%%\n", percentage);
    if (percentage >= 40) {
        printf("Result: PASSED\n");
    } else {
        printf("Result: FAILED\n");
    }
    printf("-----------------\n");
    return 0;
}
