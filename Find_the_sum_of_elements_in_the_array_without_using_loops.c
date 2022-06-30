#include<stdio.h>
int main()
{
    int i,n,index=0,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    label:
    sum=sum+arr[index++];
    if(index<n)
    {
        goto label;
    }
    printf("%d",sum);
    return 0;
}