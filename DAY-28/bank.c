#include <stdio.h>
int main(){
    int acc;
    char name[30];
    float bal, amount;
    int choice;
    printf("Enter Account Number: ");
    scanf("%d", &acc);
    printf("Enter Account Holder Name: ");
    scanf("%s", name);
    printf("Enter Initial Balance: ");
    scanf("%f", &bal);
    printf("\n1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Check Balance\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);
    if(choice == 1){
        printf("Enter Deposit Amount: ");
        scanf("%f", &amount);
        bal += amount;
        printf("Updated Balance = %.2f", bal);
    }
    else if(choice == 2){
        printf("Enter Withdrawal Amount: ");
        scanf("%f", &amount);
        if(amount <= bal){
            bal -= amount;
            printf("Updated Balance = %.2f", bal);
        }
        else{
            printf("Insufficient Balance");
        }
    }
    else if(choice == 3){
        printf("Current Balance = %.2f", bal);
    }
    else{
        printf("Invalid Choice");
    }
    return 0;
}