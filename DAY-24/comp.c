#include <stdio.h>
int main(){
    char str[100];
    int i, x;
    printf("Enter a string: ");
    scanf("%s", str);
    i = 0;
    while(str[i] != '\0'){
        x = 1;
        while(str[i] == str[i + 1]){
            x++;
            i++;
        }
        printf("%c%d", str[i], x);
        i++;
    }
    return 0;
}