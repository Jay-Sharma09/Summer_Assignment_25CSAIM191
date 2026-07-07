#include<stdio.h>
int main(){
    int i,n,x = 0;
    printf("Enter the value\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i  == 0){
           x++;
        }
    }
    if (x == 2){
        printf("Prime");
    }
        else {
            printf("Not Prime");
        }
        
    return 0;
}