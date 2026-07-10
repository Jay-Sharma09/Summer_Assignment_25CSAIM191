#include <stdio.h>
int per(int n){
    int i, s = 0;
    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
            s += i;
    }
    return (s == n);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(per(n))
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");
    return 0;
}