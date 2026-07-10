#include <stdio.h>
int arm(int n){
    int s = 0, r, temp = n;
    while(temp != 0)
    {
        r = temp % 10;
        s = s + (r * r * r);
        temp = temp / 10;
    }
    return (s == n);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(arm(n))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");
    return 0;
}