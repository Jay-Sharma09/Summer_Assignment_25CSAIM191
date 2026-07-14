#include <stdio.h>
int main(){
    char str[100];
    int i, j, x;
    printf("Enter a string: ");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++){
        x = 0;
        for(j = 0; str[j] != '\0'; j++){
            if(str[i] == str[j]){
                x++;
            }
        }
        if(x == 1){
            printf("First non-repeating character = %c", str[i]);
            break;
        }
    }
    return 0;
}