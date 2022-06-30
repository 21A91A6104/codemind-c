#include<stdio.h>
int main()
{
    int t,n,m,r,i,count=0;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d%d",&n,&m);
        count=0;
        for(i=n;i<=m;i++)
        {
            if(i%10==2||i%10==3||i%10==9)
            {
                count++;
            }
        }
        printf("%d
",count);
        t--;
    }
    return 0; 
}