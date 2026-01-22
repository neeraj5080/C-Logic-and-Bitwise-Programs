// Program: Decimal to Binary Conversion
// Description: This program converts a non-negative decimal number to binary representation.

#include <stdio.h>

int main() {
    int n;
    int binary[32];
    int i = 0;

    scanf("%d", &n);

    if (n < 0) {
        printf("Negative numbers are not supported\n");
        return 0;
    }

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    while (n > 0) {
        binary[i++] = n % 2;
        n = n / 2;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
