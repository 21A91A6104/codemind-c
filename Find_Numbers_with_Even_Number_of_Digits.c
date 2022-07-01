#include<stdio.h>
int main()
{
    int i,r,n,temp,count=0,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        while(arr[i]!=0)
        {
            arr[i]=arr[i]/10;
            sum++;
        }
        if(sum%2==0)
        count++;
    }
    printf("%d",count);
    return 0;
}
        