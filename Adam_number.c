#include<stdio.h>
int main()
{
    int n,r,s,sum=0,pro=0,temp,a=0;
    scanf("%d",&n);
    s=n*n;
    temp=n;
    while(temp>0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    pro=sum*sum;
    while(pro>0)
    {
        r=pro%10;
        a=a*10+r;
        pro=pro/10;
    }
    if(a==s)
    {
        printf("True");
    }
    else
    printf("False");
    return 0;
}