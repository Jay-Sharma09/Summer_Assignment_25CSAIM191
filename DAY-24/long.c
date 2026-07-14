#include <stdio.h>
int main(){
    char str[100];
    int i = 0;
    int x = 0, max = 0;
    printf("Enter a sentence:\n");
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0'){
        if(str[i] != ' ' && str[i] != '\n'){
            x++;
        }
        else{
            if(x > max){
                max = x;
            }
            x = 0;
        }
        i++;
    }
    if(x > max){
        max = x;
    }
    printf("Length of longest word = %d", max);
    return 0;
}