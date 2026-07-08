#include <stdio.h>
int main() {
    int n, x, r, fact, s = 0, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    x = n;
    while (n > 0) {
        r = n % 10;
        fact = 1;
        for (i = 1; i <= r; i++)
            fact *= i;
        s += fact;
        n /= 10;
    }
    if (s == x){
        printf("Strong Number");
    }
    else{
        printf("Not a Strong Number");
    }
    return 0;
}