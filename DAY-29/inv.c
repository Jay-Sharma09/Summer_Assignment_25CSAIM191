#include <stdio.h>
int main(){
    int n, i;
    int id[20], x[20];
    float price[20];
    printf("Enter number of products: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("\nProduct %d\n", i + 1);
        printf("Enter Product ID: ");
        scanf("%d", &id[i]);
        printf("Enter Quantity: ");
        scanf("%d", &x[i]);
        printf("Enter Price: ");
        scanf("%f", &price[i]);
    }
    printf("\nInventory Details\n");
    for(i = 0; i < n; i++){
        printf("\nProduct ID : %d", id[i]);
        printf("\nQuantity   : %d", x[i]);
        printf("\nPrice      : %.2f\n", price[i]);
    }
    return 0;
}