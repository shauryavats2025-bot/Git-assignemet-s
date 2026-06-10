#include <stdio.h>
#include <stdlib.h> 
int main() {
    int n, a, r, s = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    a = n;
    n = abs(n);
    while (n > 0) {
        r = n % 10;  
        s += r;        
        n = n / 10;      
    }
    printf("The sum of the digits of %d is: %d\n", a, s);
    return 0;
}
