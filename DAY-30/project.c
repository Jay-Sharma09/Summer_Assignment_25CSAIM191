#include <stdio.h>
int accNo[20];
char name[20][30];
float balance[20];
int n = 0;
void createAccount(){
    printf("\nEnter Account Number: ");
    scanf("%d", &accNo[n]);
    printf("Enter Account Holder Name: ");
    scanf("%s", name[n]);
    printf("Enter Initial Balance: ");
    scanf("%f", &balance[n]);
    n++;
    printf("\nAccount Created Successfully.\n");
}
void displayAccounts(){
    int i;
    if(n == 0){
        printf("\nNo Accounts Available.\n");
        return;
    }
    printf("\nAccount Details\n");
    for(i = 0; i < n; i++){
        printf("\nAccount Number : %d", accNo[i]);
        printf("\nName           : %s", name[i]);
        printf("\nBalance        : %.2f\n", balance[i]);
    }
}
void deposit(){
    int acc, i;
    float amount;
    printf("Enter Account Number: ");
    scanf("%d", &acc);
    for(i = 0; i < n; i++){
        if(accNo[i] == acc){
            printf("Enter Deposit Amount: ");
            scanf("%f", &amount);
            balance[i] += amount;
            printf("Updated Balance = %.2f\n", balance[i]);
            return;
        }
    }
    printf("Account Not Found.\n");
}
void withdraw(){
    int acc, i;
    float amount;
    printf("Enter Account Number: ");
    scanf("%d", &acc);
    for(i = 0; i < n; i++){
        if(accNo[i] == acc){
            printf("Enter Withdrawal Amount: ");
            scanf("%f", &amount);
            if(amount <= balance[i]){
                balance[i] -= amount;
                printf("Updated Balance = %.2f\n", balance[i]);
            }
            else{
                printf("Insufficient Balance.\n");
            }
            return;
        }
    }
    printf("Account Not Found.\n");
}
void searchAccount(){
    int acc, i;
    printf("Enter Account Number: ");
    scanf("%d", &acc);
    for(i = 0; i < n; i++){
        if(accNo[i] == acc){
            printf("\nAccount Found\n");
            printf("Account Number : %d\n", accNo[i]);
            printf("Name           : %s\n", name[i]);
            printf("Balance        : %.2f\n", balance[i]);
            return;
        }
    }
    printf("Account Not Found.\n");
}
int main(){
    int choice;
    while(1){
        printf("1. Create Account\n");
        printf("2. Display All Accounts\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Search Account\n");
        printf("6. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:{
                createAccount();
                break;
            }
            case 2:{
                displayAccounts();
                break;
            }
            case 3:{
                deposit();
                break;
            }
            case 4:{
                withdraw();
                break;
            }
            case 5:{
                searchAccount();
                break;
            }
            case 6:{
                printf("Thank You!\n");
                return 0;
            }
            default:{
                printf("Invalid Choice.\n");
            }
        }
    }
    return 0;
}