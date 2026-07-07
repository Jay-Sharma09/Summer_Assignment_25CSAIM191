#include<stdio.h>
int main(){
    int i, n, r, p, s=0;
    printf("Enter the number\n");
    scanf("%d", &n);
    p = n;
    while(n > 0){
        r = n % 10;
        s = (s * 10) + r;
        n = n / 10;
    }
    printf("%d\n", s);
    if(s == p){
        printf("Palendrome\n");
    }
    else{
        printf("Not palendrome\n");
    }
    return 0;
}