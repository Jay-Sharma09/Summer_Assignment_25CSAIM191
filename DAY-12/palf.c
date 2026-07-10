#include <stdio.h>
int pal(int n){
    int x = 0, r, temp = n;
    while(temp != 0)
    {
        r = temp % 10;
        x = x * 10 + r;
        temp = temp / 10;
    }
    return (x == n);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(pal(n))
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");
    return 0;
}