#include <stdio.h>
double power_iterative(double x, int n) {
    double result = 1.0;
    int abs_n = (n < 0) ? -n : n; 
    for (int i = 0; i < abs_n; i++) {
        result *= x;
    }
    if (n < 0) {
        return 1.0 / result;
    }

    return result;
}
int main() {
    double x;
    int n;
    printf("Enter base (x): ");
    scanf("%lf", &x);
    printf("Enter integer exponent (n): ");
    scanf("%d", &n);
    double ans = power_iterative(x, n);
    printf("%.4lf raised to the power of %d is: %.4lf\n", x, n, ans);
    return 0;
}
