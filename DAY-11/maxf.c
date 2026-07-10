#include <stdio.h>
int max(int a, int b){
    if (a > b){
    return a;
    }
    else if (a == b){
        return a;
    }
    else {
        return b;
    }
}
int main(){
    int x, y;
    printf("Enter the two values:\n");
    scanf("%d%d", &x, &y);
    printf("Maximum number is %d", max(x,y));
    return 0;
}