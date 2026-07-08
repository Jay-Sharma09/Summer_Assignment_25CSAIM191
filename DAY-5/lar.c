#include <stdio.h>
int main() {
    int n, i, x = -1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n % 2 == 0) {
        x = 2;
        n /= 2;
    }
    for (i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            x = i;
            n /= i;
        }
    }
    if (n > 2){
        x = n;
    printf("Largest Prime Factor = %d", x);
    }
    return 0;
}