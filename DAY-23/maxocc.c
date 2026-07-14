#include <stdio.h>
int main(){
    char str[100];
    int i, j, x, max = 0;
    char ch;
    printf("Enter a string: ");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++){
        x = 0;
        for(j = 0; str[j] != '\0'; j++){
            if(str[i] == str[j]){
                x++;
            }
        }
        if(x > max){
            max = x;
            ch = str[i];
        }
    }
    printf("Maximum occurring character = %c", ch);
    return 0;
}