#include <stdio.h>
int main(){
    char x[5][20], y[20];
    int i, j, k;
    printf("Enter 5 names:\n");
    for(i = 0; i < 5; i++){
        scanf("%s", x[i]);
    }
    for(i = 0; i < 4; i++){
        for(j = i + 1; j < 5; j++){
            k = 0;
            while(x[i][k] == x[j][k]){
                k++;
            }
            if(x[i][k] > x[j][k]){
                int m = 0;
                while(x[i][m] != '\0'){
                    y[m] = x[i][m];
                    m++;
                }
                y[m] = '\0';
                m = 0;
                while(x[j][m] != '\0'){
                    x[i][m] = x[j][m];
                    m++;
                }
                x[i][m] = '\0';
                m = 0;
                while(y[m] != '\0'){
                    x[j][m] = y[m];
                    m++;
                }
                x[j][m] = '\0';
            }
        }
    }
    printf("Names in Alphabetical Order:\n");
    for(i = 0; i < 5; i++){
        printf("%s\n", x[i]);
    }
    return 0;
}