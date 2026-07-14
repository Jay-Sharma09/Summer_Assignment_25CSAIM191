#include <stdio.h>
int main(){
    char word[5][20], x[20];
    int a, b;
    int i, j, k;
    printf("Enter 5 words:\n");
    for(i = 0; i < 5; i++){
        scanf("%s", word[i]);
    }
    for(i = 0; i < 4; i++){
        for(j = i + 1; j < 5; j++){
            a = 0;
            b = 0;
            while(word[i][a] != '\0'){
                a++;
            }
            while(word[j][b] != '\0'){
                b++;
            }
            if(a > b){
                for(k = 0; word[i][k] != '\0'; k++){
                    x[k] = word[i][k];
                }
                x[k] = '\0';
                for(k = 0; word[j][k] != '\0'; k++){
                    word[i][k] = word[j][k];
                }
                word[i][k] = '\0';
                for(k = 0; x[k] != '\0'; k++){
                    word[j][k] = x[k];
                }
                word[j][k] = '\0';
            }
        }
    }
    printf("Words sorted by length:\n");
    for(i = 0; i < 5; i++){
        printf("%s\n", word[i]);
    }
    return 0;
}