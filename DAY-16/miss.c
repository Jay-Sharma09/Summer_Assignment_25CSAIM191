#include <stdio.h>
int main(){
    int n, i, s = 0, x, arr[n - 1];
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n - 1);
    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
        s += arr[i];
    }
    x = n * (n + 1) / 2;
    printf("Missing number = %d", x - s);
    return 0;
}