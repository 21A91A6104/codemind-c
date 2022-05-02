#include<stdio.h>
int main()
{
    int n,sum=0,r,temp,i;
    {
        scanf("%d",&n);
        temp=n;
        for(i=1;i<n;i++)
        {
            if(n%i==0)
            sum=sum+i;
        }
        if(n==sum)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    }
    return 0;
}