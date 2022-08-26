#include<stdio.h>
int main()
{
    int n,first=0,second=0,i,j;
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                first=first+arr[i][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==n-j-1)
            {
                second=second+arr[i][j];
            }
        }
    }
    printf("Principal Diagonal:%d",first);
    printf("
Secondary Diagonal:%d",second);
    return 0;
}