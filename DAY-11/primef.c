#include <stdio.h>
int pr(int n){
    int i;
    if(n <= 1)
        return 0;
    for(i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}
int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    if(pr(n))
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}