// Program: Addition without using '+' operator
// Description: This program adds two integers using bitwise operators.

#include <stdio.h>

int main() {
    int a, b, carry;

    scanf("%d %d", &a, &b);

    while (b != 0) {
        carry = a & b;      // carry bits
        a = a ^ b;          // sum without carry
        b = carry << 1;     // shift carry
    }

    printf("%d\n", a);

    return 0;
}
