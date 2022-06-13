#include<stdio.h>
int main()
{
    int i,n,sum=0,s=0,k;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        s=i;
    }
    for(i=0;i<n;i++)
    {
        if(i<=s)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
    return 0;
}