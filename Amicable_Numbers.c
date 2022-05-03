#include<stdio.h>
int main()
{
    int a,b,i,sum=0,add=0;
    scanf("%d %d",&a,&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        sum=sum+i;
    }
    for(i=1;i<b;i++)
    {
        if(b%i==0)
        add=add+i;
    }
    if(sum==b&&add==a)
    printf("Amicable");
    else
    printf("Not Amicable");
    return 0;
}