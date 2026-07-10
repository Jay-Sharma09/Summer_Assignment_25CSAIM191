#include<stdio.h>
int main(){
   int a[25],i,n,lar,small;
   printf("How many values you want to enter please less than 20 values\n");
   scanf("%d", &n);
   printf("Enter the values to find largest number and smallest number\n");
   for(i = 0; i < n; i++){
    scanf("%d", &a[i]);
   }
   lar = a[0];
   for(i = 1; i < n; i++){
    if (a[i] > lar){
        lar = a[i];
    }
   }
   printf("Largest value = %d\n", lar);
  small = a[0];
  for(i = 0; i < n; i++){
    if(a[i] < small){
        small = a[i];
    }
  }
  printf("Smallest value = %d", small);
  return 0;
}