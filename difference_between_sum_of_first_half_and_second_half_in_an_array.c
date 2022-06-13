#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,sum=0,s=0,diff;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        sum+=arr[i];
    }
    for(i=n/2;i<n;i++)
    {
        s+=arr[i];
    }
    diff=abs(sum-s);
    printf("%d",diff);
    return 0;
}
       