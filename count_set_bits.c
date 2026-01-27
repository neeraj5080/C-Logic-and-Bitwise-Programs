// Program: Count Set Bits
// Description: This program counts the number of set bits (1s) in the binary
// representation of an integer using Brian Kernighan’s algorithm.

#include <stdio.h>

int main() {
    unsigned int n;
    int count = 0;

    scanf("%u", &n);

    while (n) {
        n = n & (n - 1);  // removes the rightmost set bit
        count++;
    }

    printf("%d\n", count);

    return 0;
}
