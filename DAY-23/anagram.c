#include <stdio.h>
int main(){
    char str1[100], str2[100];
    int i, j, a = 0, b = 0;
    int x[26] = {0}, y[26] = {0};
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    while(str1[a] != '\0'){
        x[str1[a] - 'a']++;
        a++;
    }
    while(str2[b] != '\0'){
        y[str2[b] - 'a']++;
        b++;
    }
    if(a != b){
        printf("Not Anagram");
        return 0;
    }
    for(i = 0; i < 26; i++){
        if(x[i] != y[i]){
            printf("Not Anagram");
            return 0;
        }
    }
    printf("Anagram");
    return 0;
}