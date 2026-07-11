#include <stdio.h>
int main(){
    int n, i, j, sum, arr[n], x = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter required sum: ");
    scanf("%d", &sum);
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == sum){
                printf("Pair found: %d %d\n", arr[i], arr[j]);
                x = 1;
            }
        }
    }
    if(x == 0){
        printf("No pair found");
    }
    return 0;
}