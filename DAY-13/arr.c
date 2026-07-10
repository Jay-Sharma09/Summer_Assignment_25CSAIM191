#include<stdio.h>
int main(){
   int a[101],i,n;
   printf("How many values you want to enter, please enter less than 100 values\n");
   scanf("%d", &n);
   printf("Enter the values\n");
   for(i = 0; i < n; i++){
   scanf("%d", &a[i]);
   }
   for(i = 0; i < n; i++){
   printf("%d ", a[i]);
   }
   return 0;
}
