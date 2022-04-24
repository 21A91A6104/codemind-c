#include <stdio.h>
 
int main() {
   int nbr, i, r, arr[30];
 
 
   scanf("%d", &nbr);
 
   
   for (i = 0; i < nbr; i++) {
      scanf("%d", &arr[i]);
   }
 
   
   scanf("%d", &r);
 
   //Research starts from the index 0
   i = 0;
   while (i < nbr && r != arr[i]) {
      i++;
   }
 
   if (i < nbr) {
      printf("True");
   } else {
      printf("False");
   }
 
   return 0;
}