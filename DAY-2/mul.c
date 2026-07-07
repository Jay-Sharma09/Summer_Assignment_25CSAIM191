#include<stdio.h>
int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    int x = n % 10;
    int y = n / 10;
    int mul = x * y;
    printf("The product of the digits of a number = %d", mul);
    return 0;
}