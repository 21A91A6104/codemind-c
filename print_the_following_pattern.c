#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j||j==(n-i-1))
            {
                printf("x");
            }
            else
            {
                printf("0");
            }
        }
        printf("
");
    }
    return 0;
}