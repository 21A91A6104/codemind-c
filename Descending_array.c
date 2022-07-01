#include<stdio.h>
int main()
{
    int c=0,i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]<arr[i-1])
        {
            c++;
        }
    }
    if(c==n-1)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
    return 0;
}