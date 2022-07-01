#include<stdio.h>
int main()
{
    int i, n,sum=0,x=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            x=i;
        }
        else
        {
            continue;
        }
        break;
    }
    for(i=0;i<x;i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}