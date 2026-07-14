#include <stdio.h>
int main(){
    int choice;
    float bal = 5000, amount;
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if(choice == 1){
        printf("Balance = %.2f", bal);
    }
    else if(choice == 2){
        printf("Enter deposit amount: ");
        scanf("%f", &amount);
        bal += amount;
        printf("New Balance = %.2f", bal);
    }
    else if(choice == 3){
        printf("Enter withdrawal amount: ");
        scanf("%f", &amount);
        if(amount <= bal){
            bal -= amount;
            printf("Remaining Balance = %.2f", bal);
        }
        else{
            printf("Insufficient Balance");
        }
    }
    else{
        printf("Invalid Choice");
    }
    return 0;
}