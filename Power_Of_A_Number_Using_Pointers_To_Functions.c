#include <stdio.h>

double power(double base, double exponent) {
    double result = 1;
    int i;
    for (i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}
typedef double (*PowerFunctionPointer)(double, double);

double calculatePower(PowerFunctionPointer powerFunc,
                     double base,double exponent) {
    return powerFunc(base, exponent);
}
int main() {
    double base, exponent;
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%lf", &exponent);
    PowerFunctionPointer powerPtr = &power;

    double result = calculatePower(powerPtr, base, exponent);
    printf("%lf^%lf = %lf\n", base, exponent, result);
    return 0;
} 
