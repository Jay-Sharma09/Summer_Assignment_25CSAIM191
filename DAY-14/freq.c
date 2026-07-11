#include <stdio.h>
int main() {
    int n, i, x, arr[n], c = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter element to find frequency: ");
    scanf("%d", &x);
    for(i = 0; i < n; i++) {
        if(arr[i] == x)
            c++;
    }
    printf("Frequency = %d\n", c);
    return 0;
}