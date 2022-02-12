#include<stdio.h>
int main()
{
    int a, i=0, n, rem=0, b[10];
    scanf("%d",&a);
    
    while(a!=0)
    {
        rem = a%10;
        b[i]=rem;
        i++;
        a/=10;
    }
    n=i;
    
    for(int j=(n-1);j>=0;j--)
    {
        if(b[j]==6)
        {
            b[j]=9;
            break;
        }
        
    }
    for(int j=(n-1);j>=0;j--)
    {
        printf("%d",b[j]);
    }
}