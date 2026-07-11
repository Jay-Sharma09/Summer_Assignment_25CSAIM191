#include <stdio.h>
int main(){
    char str[100];
    int i = 0, len = 0, x = 1;
    printf("Enter a string: ");
    scanf("%s", str);
    while(str[len] != '\0'){
        len++;
    }
    for(i = 0; i < len / 2; i++){
        if(str[i] != str[len - i - 1])
        {
            x = 0;
        }
    }
    if(x == 1){
        printf("Palindrome String");
    }
    else{
        printf("Not a Palindrome String");
    }
    return 0;
}