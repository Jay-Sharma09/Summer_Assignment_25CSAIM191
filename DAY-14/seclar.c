#include <stdio.h>
int main() {
    int n, i, lar, sec, arr[n];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    if(arr[0] > arr[1]) {
        lar = arr[0];
        sec = arr[1];
    } 
    else {
        lar = arr[1];
        sec = arr[0];
    }
    for(i = 2; i < n; i++) {
        if(arr[i] > lar) {
            sec = lar;
            lar = arr[i];
        }
        else if(arr[i] > sec && arr[i] != lar) {
            sec = arr[i];
        }
    }
    printf("Second largest element = %d\n", sec);
    return 0;
}