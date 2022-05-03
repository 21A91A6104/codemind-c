#include<stdio.h>
int main()
{
    int i,j,n,m,even=0,odd=0;
    scanf("%d %d",&n,&m);
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
           if(arr[i][j]%2==0)
           {
                even=even+arr[i][j];
           }
           else
           {
                odd=odd+arr[i][j];
           }
        }
        
    }
    printf("%d %d",even,odd);
    return 0;
}