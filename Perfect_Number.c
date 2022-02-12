#include<stdio.h>
int main()
   {
   int number,i,result=0;
   scanf("%d",&number);
   for(i=1;i<=number;i++)
   if(number%i==0)
         result=result+i;
   if(result==2*number) 
      {
        printf("True");
       }
       else
      {
    printf("False");
      }
   }