#include <stdio.h>
int main(){
    char str[100];
    int choice, i, x = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("\n1. Find Length\n");
    printf("2. Convert to Uppercase\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:{
            while(str[x] != '\0'){
                x++;
            }
            printf("Length = %d", x);
            break;
        }
        case 2:{
            for(i = 0; str[i] != '\0'; i++){
                if(str[i] >= 'a' && str[i] <= 'z'){
                    str[i] -= 32;
                }
            }
            printf("Uppercase String = %s", str);
            break;
        }
        default:{
            printf("Invalid Choice");
        }
    }
    return 0;
}