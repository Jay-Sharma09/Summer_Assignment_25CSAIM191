#include <stdio.h>
int main() {
    int n, i, x, arr[n];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    x = arr[0];
    for(i = 0; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = x;
    printf("Array after left rotation:\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
}
    return 0;
}