#include<stdio.h>
int main()
{
    int i,n,m,temp=0,count,r;
    scanf("%d %d",&n,&m);
    for(i=n;i<=m;i++)
    {
        temp=i;
        count=0;
        while(temp!=0)
        {
            r=temp%10;
            if(r==0||i%r!=0)
            {
                count=1;
                break;
            }
            temp=temp/10;
        }
        if(count==0)
        printf("%d ",i);
    }
    return 0;
}