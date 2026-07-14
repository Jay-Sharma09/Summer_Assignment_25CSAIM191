#include <stdio.h>
int main(){
    char name[20];
    int roll;
    float x, y, z, total, per;
    printf("Enter Roll Number: ");
    scanf("%d", &roll);
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Marks of 3 Subjects:\n");
    scanf("%f%f%f", &x, &y, &z);
    total = x + y + z;
    per = total / 3;
    printf("Roll No    : %d\n", roll);
    printf("Name       : %s\n", name);
    printf("Total      : %.2f\n", total);
    printf("Percentage : %.2f\n", per);
    if(per >= 90){
        printf("Grade : A+");
    }
    else if(per >= 75){
        printf("Grade : A");
    }
    else if(per >= 60){
        printf("Grade : B");
    }
    else if(per >= 40){
        printf("Grade : C");
    }
    else{
        printf("Grade : Fail");
    }
    return 0;
}