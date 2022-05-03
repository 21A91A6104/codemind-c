#include<stdio.h>
int main()
{
    int n,i,k,count=0;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%k==0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}