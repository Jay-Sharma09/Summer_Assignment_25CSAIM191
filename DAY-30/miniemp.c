#include <stdio.h>
int main(){
    int n, i;
    int id[20];
    char name[20][30];
    float salary[20];
    printf("Enter number of employees: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("\nEmployee %d\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &id[i]);
        printf("Enter Employee Name: ");
        scanf("%s", name[i]);
        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }
    for(i = 0; i < n; i++){
        printf("\nEmployee ID   : %d", id[i]);
        printf("\nEmployee Name : %s", name[i]);
        printf("\nSalary        : %.2f\n", salary[i]);
    }
    return 0;
}