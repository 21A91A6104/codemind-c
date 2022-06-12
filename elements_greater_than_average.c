#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,max,sum=0,count=0;
    int avg;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=(sum/n);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=avg)
        count++;
    }
    printf("%d",count);
    return 0;
}