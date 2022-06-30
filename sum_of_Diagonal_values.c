#include<stdio.h>
int main()
{
    int m,n,i,j,sum=0;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j||j==m-i-1)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    printf("%d",sum);
    return 0;
}