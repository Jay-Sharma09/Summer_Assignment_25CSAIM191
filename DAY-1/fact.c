#include<stdio.h>
int main(){
    int fact = 1,i,n;
    printf("Enter the value for factorial\n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("the factorial = %d", fact);
    return 0;
}