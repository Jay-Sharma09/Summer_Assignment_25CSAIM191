#include <stdio.h>
int main(){
    int id;
    char book[30];
    printf("Enter Book ID: ");
    scanf("%d", &id);
    printf("Enter Book Name: ");
    scanf("%s", book);
    printf("\nLibrary Record\n");
    printf("Book ID   : %d\n", id);
    printf("Book Name : %s\n", book);
    return 0;
}