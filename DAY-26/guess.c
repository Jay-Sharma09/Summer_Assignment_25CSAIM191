#include <stdio.h>
int main(){
    int x = 25;
    int y;
    printf("Guess the number (1-50): ");
    scanf("%d", &y);
    if(y == x){
        printf("Congratulations! You guessed correctly.");
    }
    else if(y < x){
        printf("Too Low!");
    }
    else{
        printf("Too High!");
    }
    return 0;
}