#include<stdio.h>
int main()
{
    int n,j,k,count=0,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    k=n/2;
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i;j<n;j++)
        {
            if(arr[i]==arr[j])
            count++;
        }
        if(count>k)
        printf("%d",arr[i]);
    }
}