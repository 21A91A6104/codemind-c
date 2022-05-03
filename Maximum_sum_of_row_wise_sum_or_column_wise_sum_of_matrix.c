#include<stdio.h>
int main()
{
    int i,j,n,m,sum=0,max,maxi,s=0;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    max=0;
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<m;j++)
        {
            sum=sum+arr[i][j];
        }
        if(sum>max)
        {
            max=sum;
        }
    }
    maxi=0;
    for(j=0;j<m;j++)
    {
        s=0;
        for(i=0;i<n;i++)
        {
            s=s+arr[i][j];
        }
        if(s>maxi)
        {
            maxi=s;
        }
    }
    if(max>maxi)
    {
        printf("%d",max);
    }
    else
    {
        printf("%d",maxi);
    }
    return 0;
}