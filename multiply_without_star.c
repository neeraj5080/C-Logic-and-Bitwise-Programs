// Program: Multiplication without using '*' operator
// Description: This program multiplies two integers using repeated addition
// and handles negative numbers correctly.

#include <stdio.h>

int main() {
    int a, b;
    int result = 0;
    int negative = 0;

    scanf("%d %d", &a, &b);

    // Handle sign
    if ((a < 0 && b > 0) || (a > 0 && b < 0))
        negative = 1;

    // Convert to positive
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    // Repeated addition
    for (int i = 0; i < b; i++) {
        result += a;
    }

    // Apply sign
    if (negative)
        result = -result;

    printf("%d\n", result);

    return 0;
}
