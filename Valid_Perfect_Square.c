#include<stdio.h>
int main()
{
    int i,t,count=0,n;
    scanf("%d",&t);
    while(t>0)
    {
        count=0;
        scanf("%d",&n);
        for(i=0;i<=n;i++)
        {
            if(n==i*i)
            count++;
        }
        if(count==1)
        printf("True");
        else
        printf("False");
        printf("
");
        t--;
    }
    return 0;
}