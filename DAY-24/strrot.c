#include <stdio.h>
int main(){
    char str1[100], str2[100];
    int i, x = 0, y = 0;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    while(str1[x] != '\0'){
        x++;
    }
    while(str2[y] != '\0'){
        y++;
    }
    if(x != y){
        printf("Not Rotation");
        return 0;
    }
    for(i = 0; i < x; i++){
        if(str1[i] != str2[(i + 1) % x]){
            printf("Not Rotation");
            return 0;
        }
    }
    printf("Rotation");
    return 0;
}