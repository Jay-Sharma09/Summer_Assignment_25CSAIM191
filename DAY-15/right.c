#include <stdio.h>
int main() {
    int n, i, x, arr[n];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    x = arr[n - 1];
    for(i = n - 1; i > 0; i--){
        arr[i] = arr[i - 1];
    }
    arr[0] = x;
    printf("Array after right rotation:\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}