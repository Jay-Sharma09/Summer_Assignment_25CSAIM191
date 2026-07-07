#include<stdio.h>
int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    int x = n % 10;
    int y = n / 10;
    int sum = x + y;
    printf("The sum of digits of a number = %d", sum);
    return 0;
}