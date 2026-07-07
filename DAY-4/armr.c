#include <stdio.h>
int main() {
    int a, b, n, x, r, s;
    printf("Enter the starting number: ");
    scanf("%d", &a);
    printf("Enter the ending number: ");
    scanf("%d", &b);
    printf("Armstrong numbers are:\n");
    for (n = a; n <= b; n++) {
        x = n;
        s = 0;
        while (x > 0) {
            r = x % 10;
            s = s + (r * r * r);
            x = x / 10;
        }
        if (s == n)
            printf("%d ", n);
    }
    return 0;
}