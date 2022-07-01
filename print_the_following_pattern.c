#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==(n-1)||j==n)
            {
                continue;
            }
            printf("%d",j);
        }
        for(j=(n-3);j>=1;j--)
        {
            printf("%d",j);
        }
        printf("
");
    }
    return 0;
}