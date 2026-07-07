#include <stdio.h>
int main() {
    int n, x, r, s = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    x = n;
    while (n > 0) {
        r = n % 10;
        s = s + (r * r * r);
        n = n / 10;
    }
    if (s == x){
        printf("%d is an Armstrong number.", x);
    }
    else{
        printf("%d is not an Armstrong number.", x);
    }
    return 0;
}