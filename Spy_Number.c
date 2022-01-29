#include<stdio.h>
int main()
{
    int n,r,p=1,sum=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        p=p*r;
        n=n/10;
    }
    if(sum==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
}