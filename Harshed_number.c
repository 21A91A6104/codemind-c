#include<stdio.h>
int main()
{
    int n,l,r,sum=0;
    scanf("%d",&n);
    l=n;
    while(n!=0)
    {
      r=n%10;
      sum=sum+r;
      n=n/10;
    }
    if(l%sum==0)
    {
    printf("True");
    }
    else
    {
        printf("False");
    }
}