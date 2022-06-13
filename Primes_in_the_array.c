#include<stdio.h>
int main()
{
    int n,count=0,j,i,m=0,temp;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            continue;
        }
        else
        {
            count=0;
            temp=arr[i];
            for(j=2;j<temp;j++)
            {
                if(temp%j==0)
                {
                    count++;
                }
            }
        }
        if(count==0)
        m++;
    }
    printf("%d",m);
}