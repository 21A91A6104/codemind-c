#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,j,x=0,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            continue;
        }
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                x++;
                arr[j]=0;
                break;
            }
        }
    }
    printf("%d",x);
}
    