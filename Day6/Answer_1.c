#include <stdio.h>
int main() {
    int decimalNumber;
    int binaryArray[32];
    int index = 0;
    printf("Enter a decimal number: ");
    if (scanf("%d", &decimalNumber) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    if (decimalNumber == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }
    int temp = decimalNumber;
    while (temp > 0) {
        binaryArray[index] = temp % 2; 
        temp = temp / 2;            
        index++;                  
    }
    printf("Binary equivalent: ");
    for (int j = index - 1; j >= 0; j--) {
        printf("%d", binaryArray[j]);
    }
    printf("\n");
    return 0;
}
