#include<stdio.h>
int main()
{
    int n,count=0,j,i,a;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>1)
        a=i;
    }
    printf("%d",arr[a]);
    return 0;
}