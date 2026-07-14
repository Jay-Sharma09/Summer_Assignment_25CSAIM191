#include <stdio.h>
int main(){
    int n, i;
    printf("Enter Number of Contacts: ");
    scanf("%d", &n);
    char name[n][30];
    long long phone[n];
    for(i = 0; i < n; i++){
        printf("\nContact %d\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", name[i]);
        printf("Enter Phone Number: ");
        scanf("%lld", &phone[i]);
    }
    printf("\nContact List\n");
    for(i = 0; i < n; i++){
        printf("\nName  : %s", name[i]);
        printf("\nPhone : %lld\n", phone[i]);
    }
    return 0;
}