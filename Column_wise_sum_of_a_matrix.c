#include<stdio.h>
int main()
{
    int n,m,i,j,sum=0;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<m;j++)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            sum=sum+arr[i][j];
        }
        printf("%d ",sum);
    }
    return 0;
}