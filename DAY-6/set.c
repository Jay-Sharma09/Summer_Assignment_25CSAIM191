#include <stdio.h>
int main() {
    int n, x = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) {
        if (n % 2 == 1)
            x++;
        n = n / 2;
    }
    printf("Number of set bits = %d", x);
    return 0;
}