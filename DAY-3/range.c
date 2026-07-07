#include <stdio.h>

int main() {
    int x, y, i, j, p;

    printf("Enter the starting number: ");
    scanf("%d", &x);

    printf("Enter the ending number: ");
    scanf("%d", &y);

    printf("Prime numbers between %d and %d are:\n", x, y);

    for (i = x; i <= y; i++) {
        if (i < 2)
            continue;
        p = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                p = 0;
                break;
            }
        }
        if (p)
            printf("%d ", i);
    }
    return 0;
}