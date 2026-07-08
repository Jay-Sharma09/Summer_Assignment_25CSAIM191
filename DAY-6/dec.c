#include <stdio.h>
int main() {
    int z, y = 0, x = 1, r;
    printf("Enter a binary number: ");
    scanf("%d", &z);
    while (z > 0) {
        r = z % 10;
        y = y + r * x;
        x *= 2;
        z /= 10;
    }
    printf("Decimal = %d", y);
    return 0;
}