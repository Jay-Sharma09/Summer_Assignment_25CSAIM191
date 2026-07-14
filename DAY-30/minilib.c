#include <stdio.h>
int main(){
    int n, i;
    int bookid[20];
    char bookname[20][30];
    printf("Enter number of books: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("\nBook %d\n", i + 1);
        printf("Enter Book ID: ");
        scanf("%d", &bookid[i]);
        printf("Enter Book Name: ");
        scanf("%s", bookname[i]);
    }
    for(i = 0; i < n; i++){
        printf("\nBook ID   : %d", bookid[i]);
        printf("\nBook Name : %s\n", bookname[i]);
    }
    return 0;
}