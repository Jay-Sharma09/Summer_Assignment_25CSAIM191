#include <stdio.h>
int main() {
    int a, b, i, lcm = 1;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    if (a == 0 || b == 0){
        printf("LCM = 0");
    }
    else{
    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            int gcd = i;
             lcm = (a * b) / gcd ;
        }
    }
    printf("LCM = %d", lcm);
}
    return 0;
}