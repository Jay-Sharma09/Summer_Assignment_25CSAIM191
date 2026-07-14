#include <stdio.h>
int main(){
    int n, i;
    int roll[50];
    char name[50][20];
    float marks[50];
    printf("Enter number of students: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("\nStudent %d\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);
        printf("Enter Name: ");
        scanf("%s", name[i]);
        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }
    printf("\nStudent Records\n");
    for(i = 0; i < n; i++){
        printf("\nRoll No : %d", roll[i]);
        printf("\nName    : %s", name[i]);
        printf("\nMarks   : %.2f\n", marks[i]);
    }
    return 0;
}