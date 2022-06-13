#include<stdio.h>
int main()
{
    int n,count=0,j,i,m,k;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=k)
        {
            count=0;
            for(j=2;j<arr[i];j++)
            {
                if(arr[i]%j==0)
                {
                    count++;
                }
            }
            if(count==0)
            {
                m++;
            }
        }
    }
    printf("%d",m);
}