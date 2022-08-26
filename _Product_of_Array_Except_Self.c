#include<stdio.h>
int main()
{
    int n,i,j,prod=1;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        prod=1;
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                continue;
            }
            else
            {
                prod=prod*arr[j];
            }
        }
        printf("%d ",prod);
    }
}