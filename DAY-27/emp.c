#include <stdio.h>
int main(){
    int n, i;
    int id[50];
    char name[50][20];
    float salary[50];
    printf("Enter number of employees: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("\nEmployee %d\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &id[i]);
        printf("Enter Name: ");
        scanf("%s", name[i]);
        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }
    printf("\nEmployee Records\n");
    for(i = 0; i < n; i++){
        printf("\nID     : %d", id[i]);
        printf("\nName   : %s", name[i]);
        printf("\nSalary : %.2f\n", salary[i]);
    }
    return 0;
}