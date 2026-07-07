#include <stdio.h>
int main() {
    int a, b, i, gcd;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    if (a == 0){
        printf("%d", b);
    }
    else if (b == 0){
        printf("%d", a);
    }
    else{
    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    printf("GCD = %d", gcd);
}
return 0;
}