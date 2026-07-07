#include<stdio.h>
int main(){
    int a,b,c,num,i = 2;
    a = 0;
    b = 1;
    printf("Enter the value\n");
    scanf("%d", &num);
    printf("%d",a);
    printf(",%d",b);
    for(i = 2; i < num; i++){
        c = a + b;
        printf(",%d",c);
        a = b;
        b = c;
    }
    return 0;
}